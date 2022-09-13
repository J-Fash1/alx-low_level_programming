#include <stdio.h>

/**
 * main - Prints lowercase in reverse
 *
 * Return: Always (Successful)
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
