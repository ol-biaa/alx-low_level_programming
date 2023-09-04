#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: columns/width input
 * @height: rows/height input
 * Return: Double Pointer,  pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
  int **yee;
	int n, y;
if (width <= 0 || height <= 0)
		return (NULL);

	yee = malloc(sizeof(int *) * height);

	if (yee == NULL)
		return (NULL);

	for (n = 0; n < height; n++)
	{
		yee[n] = malloc(sizeof(int) * width);

		if (yee[n] == NULL)
		{
			for (; n >= 0; n--)
				free(yee[n]);

			free(yee);
			return (NULL);
		}
	}

	for (n = 0; n < height; n++)
	{
		for (y = 0; y < width; y++)
			yee[n][y] = 0;
	}

	return (yee);
}

