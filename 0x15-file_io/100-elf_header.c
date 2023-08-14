#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <stdlib.h>
#include "main.h"

#define BUF_SIZE 1024

void print_error(const char* error_message)
{
	fprintf(stderr, "%s\n", error_message);
	exit(98);
}

void print_elf_header_info(Elf64_Ehdr* header)
{
	printf("Magic: ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	printf("Class: %s\n", (header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");

	printf("Data: %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");

	printf("Version: %d\n", header->e_ident[EI_VERSION]);

	printf("OS/ABI: %d\n", header->e_ident[EI_OSABI]);

	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);

	printf("Type: 0x%x\n", header->e_type);

	printf("Entry point address: 0x%lx\n", header->e_entry);
}

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}

	int fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		print_error("Error opening file");
	}

	Elf64_Ehdr header;
	ssize_t num_bytes = read(fd, &header, sizeof(Elf64_Ehdr));
	if (num_bytes == -1)
	{
		print_error("Error reading file");
	}

	if (num_bytes != sizeof(Elf64_Ehdr))
	{
		print_error("Invalid ELF file");
	}

	print_elf_header_info(&header);

	close(fd);

	return (0);
}
