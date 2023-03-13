#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate of the string new memory space.
 * @str: pointer to string which will be duplicated.
 * Return: a pointer to the duplicated string.
 *It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *ptr = NULL;
	unsigned int i;

	if (str)
	{
		ptr = (char *)malloc(2 * sizeof(str));
		if (ptr)
		{
			for (i = 0; i < 2 * sizeof(str); i++)
			{
				ptr[i] = *str;
				str++;
			}
		}
	}
	return (ptr);
}
