#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - dynamically allocate array of size n.
 * @size: integer define size of array.
 * @c: char used to initialize array with.
 * Return:IF size = 0 NULL , else Pointer to start of the array.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = NULL;
	unsigned int i = 0;

	if (size > 0)
	{
		ptr = (char *) malloc(size);
		if (ptr)
		{
			for (i = 0; i < size; i++)
				ptr[i] = c;
		}
	}
	return (ptr);
}
