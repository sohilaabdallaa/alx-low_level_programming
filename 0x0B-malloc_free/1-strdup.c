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

	if (str)
	{
		ptr = (char *)malloc(sizeof(str)+1);
		if (ptr)
		{
			strcpy(ptr, str);
		}
	}
	return (ptr);
}
