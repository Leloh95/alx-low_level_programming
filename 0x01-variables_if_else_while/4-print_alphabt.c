#include <stdio.h>
/**
* main - start of program
* Return: 0(success)
*/
int main(void)
{
char alphaL;
for (alphaL = 'a'; alphaL <= 'z'; alphaL++)
{
if (alphaL != 'e' && alphaL != 'q')
putchar (alphaL);
}
putchar ('\n');
return (0);
}
