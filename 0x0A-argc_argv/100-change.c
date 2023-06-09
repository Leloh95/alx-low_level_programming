#include<stdio.h>
#include<stdlib.h>

/**
 * main - number of coins
 * @argc: counts arguments
 * @argv: strings used
 * Return: 0(success)
 */

int main(int argc, char *argv[])
{
int cent, coin = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}
cent = atoi(argv[1]);

while (cent > 0)
{
coin++;
if ((cent - 25) >= 0)
{
cent = cent - 25;
continue;
}
if ((cent - 10) >= 0)
{
cent = cent - 10;
continue;
}
if ((cent - 5) >= 0)
{
cent = cent - 5;
continue;
}
if ((cent - 2) >= 0)
{
cent = cent - 2;
continue;
}
cent--;
}
printf("%d\n", coin);
return (0);
}
