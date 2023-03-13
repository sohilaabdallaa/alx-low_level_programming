#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - duplicate of the string new memory space.
 * @str: pointer to string which will be duplicated.
 * Return: a pointer to the duplicated string.
 *It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *ptr = NULL;
	int index;
	int len = 0;

	if (str)
	{
		for (index = 0; str[index]; index++)
			len++;
		ptr = (char *)malloc(len + 1);
		if (ptr)
		{
			strcpy(ptr, str);
		}
	}
	return (ptr);
}
