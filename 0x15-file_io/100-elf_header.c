#include <stdio.h>
#include <fcntl.h>
#include <elf.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "main.h"

void print_error(const char* message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

void print_elf_header(const char* filename)
{
	int fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		print_error(strerror(errno));
	}

	Elf32_Ehdr elf_header;
	if (read(fd, &elf_header, sizeof(Elf32_Ehdr)) != sizeof(Elf32_Ehdr))
	{
		print_error("Failed to read ELF header");
	}

	if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		print_error("Not an ELF file");
	}

	printf("Magic: %02x %02x %02x %02x\n", elf_header.e_ident[0], elf_header.e_ident[1], elf_header.e_ident[2], elf_header.e_ident[3]);
	printf("Class: %s\n", elf_header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data: %s\n", elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little-endian" : "2's complement, big-endian");
	printf("Version: %d\n", elf_header.e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", elf_header.e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", elf_header.e_type);
	printf("Entry point address: 0x%x\n", elf_header.e_entry);
	printf("Format: ELF %d-bit\n", elf_header.e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);

	close(fd);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}

	print_elf_header(argv[1]);

	return (0);
}
