#include <stdio.h>
#include "main.h"

/**
 * _puts - Function that prints a string
 * @str: String to print
 *
 * Description: Program that prints a string
 * On success: Returns no error
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
