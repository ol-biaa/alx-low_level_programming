#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with
 * a specific char
 * @size: size of array
 * @c: character to initialize with
 *
 * Return: Pointer, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int n;

	p = malloc(sizeof(char) * size);
	if (size == 0 || p == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		p[n] = c;
	return (p);
}




