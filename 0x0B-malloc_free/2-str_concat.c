#include "main.h"
#include <stdlib.h>
/**
 *str_concat - concat 2 strings.
 *@s1: first string input.
 *@s2: second string input.
 *Return: pointer to string.
*/
char *str_concat(char *s1, char *s2)
{
  char *s;
int n, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	n = i = 0;
	while (s1[n] != '\0')
		n++;
	while (s2[i] != '\0')
		i++;
	s = malloc(sizeof(char) * (n + i + 1));

	if (s == NULL)
		return (NULL);
	n = i = 0;
	while (s1[n] != '\0')
	{
		s[n] = s1[n];
		n++;
	}

	while (s2[i] != '\0')
	{
		s[n] = s2[i];
		n++, i++;
	}
	s[n] = '\0';
	return (s);
}
