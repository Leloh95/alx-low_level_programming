#include"main.h"

/**
*check_prime - returns number is number is prime
*@n: input
*@i:input
*Return: 0(success)
*/

int check_prime(int i, int n)
{
/**
* is_prime_number - returns 1 for prime input number otherwise return 0
*check_prime - checks for prime number
*@n: input
*Return: returns 1 if n is prime number or 0
*/

int is_prime_number(int n)
{
if (n <= 1)
return (0);

return (check_prime(n, n - 1));
}
/**
*check_prime - returns number is number is prime
*@n: input
*@i:input
*Return: 0(success)
*/
int check_prime(int i, int n)
{
	if (n == 1)
		return (1);
	
	if (n % i == 0 && i > 1)
		return (0);
	
	return (check_prime(n, i - 1));
}
}
