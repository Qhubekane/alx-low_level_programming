#include "main.h"
/**
 *is_prime_number - if n is a prime number
 *@n: number integer
 *Return: 1
 *
 *
 */
int is_prime_number(int n)
{
	if (n < 0 || n == 1)
		return (0);
	return (prime2(2, n));
}

/**
 *prime2 - find prime number
 *@x: integer
 *@y: integer
 *Return: value
 */
int prime2(int x, int y)
{
	if (y == x)
		return (1);
	else if (y % x == 0)
		return (0);
	return (prime2(x + 1, y));
}
