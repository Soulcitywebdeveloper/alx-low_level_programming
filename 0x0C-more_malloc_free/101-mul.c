#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int validate_input(char *arg);
int multiply(char *arg1, char *arg2);

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!validate_input(argv[1]) || !validate_input(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	product = multiply(argv[1], argv[2]);

	printf("%d\n", product);

	return (0);
}

/**
 * validate_input - Check if input contains only digits
 * @arg: argument string
 *
 * Return: 1 if valid input, 0 if invalid input
 */
int validate_input(char *arg)
{
	int i;

	for (i = 0; arg[i] != '\0'; i++)
	{
		if (!isdigit(arg[i]))
			return (0);
	}

	return (1);
}

/**
 * multiply - Multiply two numbers
 * @arg1: first number
 * @arg2: second number
 *
 * Return: product of the two numbers
 */
int multiply(char *arg1, char *arg2)
{
	int num1 = atoi(arg1);
	int num2 = atoi(arg2);

	return (num1 * num2);
}
