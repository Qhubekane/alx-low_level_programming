#include <stdio.h>
/**
 * main - prints numbers 0-9 without using char or printf/puts,
 * and putchar 2x max
(*
 * Return: Always 0 on success
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

