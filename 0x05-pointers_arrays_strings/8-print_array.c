#include <stdio.h>
#include "main.h"

/**
 * print_array - Function that prints n element of array
 * @a: Array
 * @n: Number of elements
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n; inc++)
	{
		if (inc != n - 1)
			printf("%d, ", a[inc]);
		else
			printf("%d", a[inc]);
	}
	putchar(10);
}
