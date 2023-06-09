#include"main.h"
#include<stdio.h>

/**
 * main - start of program
 * @argc: counts arguments passed to it
 * @argv: counts strings
 * Return: 0(success)
 */

int main(int argc, char *argv[])
{
int n = 0;

for (n = 0; n < argc; n++)
{
printf("%s\n", argv[n]);
}
return (0);
}
