#include "main.h"

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with a call to
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: NULL if fail, or pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *ptr_d = ptr;
	unsigned int i, l;

	if (new_size == old_size)
		return (ptr);

	if (!ptr)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (!new_size)
	{
		free(ptr);
		return (NULL);
	}

	l = new_size > old_size ? old_size : new_size;

	new_ptr = malloc(new_size);

	RETNULL(!ptr);

	for (i = 0; i < l; i++)
		new_ptr[i] = ptr_d[i];
	free(ptr);

	return (new_ptr);
}
