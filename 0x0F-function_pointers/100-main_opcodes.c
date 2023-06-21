#include<stdio.h>
#include<stdlib.h>

/**
 * main - start of program
 * @argc: number of arguments
 * @argv: vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sizeB, index;
	int (*addr)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	sizeB = atoi(argv[1]);
	if (sizeB < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (index = 0; index < sizeB; index++)
	{
		opcode = *(unsigned char *)addr;
		printf("%.2x", opcode);

		if (index == sizeB - 1)
			continue;
		printf(" ");
		addr++;
	}
	printf("\n");
	return (0);
}
