#include "main.h"
/**
 * _strlen - count the length of string
 *
 * @s: pointer to char that takes string input
 *
 * Return: string length
*/
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
