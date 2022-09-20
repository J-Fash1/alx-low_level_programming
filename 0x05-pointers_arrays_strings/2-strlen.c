#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string pointer to pass to this function
 * Return: returns length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
