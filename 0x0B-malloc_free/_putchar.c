#include"main.h"
#include<unistd.h>

/**
 * _putchar - inputs characters to sdtout
 *@c: character to print
 *@n:input character 
 *@a: first input character
 *@b: second input character
 *Return: 0(success)
 */

int _putchar(char c)
{
return(write(1, &c, 1));
}
