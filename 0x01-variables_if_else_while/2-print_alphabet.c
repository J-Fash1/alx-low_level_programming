#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Always (Successful)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}