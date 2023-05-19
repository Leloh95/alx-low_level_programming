#include <stdio.h>
/**
* main - start program
* Return: 0(success)
*/
int main(void)
{
char alphaL = 'a';
char alphaU = 'A';
while (alphaL <= 'z')
{
putchar(alphaL);
alphaL++;
}
while (alphaU <= 'Z')
{
putchar(alphaU);
alphaU++;
}
putchar ('\n');
return (0);
}
