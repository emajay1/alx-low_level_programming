#include <stdlib.h>

/**
 * alloc_grid - A function that create and initialize a 2 dimensional \
array of integers to 0
 * @width: number of column for the array
 * @height: number of row for the array
 * Return: a pointer to the array, or NULL if fail
 */
int **alloc_grid(int width, int height)
{
	int **arr, *ar, h = 0, i, j;

	/* return NULL if width or height is 0 or negative */
	if (width < 1 || height < 1)
		return (NULL);

	/* allocate memory for pointers of each row(1D array) */
	arr = malloc(sizeof(int *) * height);

	/** if malloc fails, return NULL */
	if (arr == NULL)
		return (NULL);

	/* loop through each element of grid (i.e. each 1D array) */
	while (h < height)
	{
		/* allocate memory for each columnof grid */
		ar = malloc(sizeof(int) * width);

		/* if malloc fails, free all allocated memory and return NULL */
		if (ar == NULL)
		{
			for (i = 0; i < h; i++)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
		arr[h] =  ar;

		/* assign 0 to each element of grid */
		for (j = 0; j < width; j++)
			arr[h][j] = 0;
		h++;
	}
	return (arr);
}
