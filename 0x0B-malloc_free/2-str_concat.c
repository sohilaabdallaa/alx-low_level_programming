#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * str_concat - concatenates two strings.
 * @s1: pointer to first string.
 * @s2: pointer to sec string.
 * Return: pointer to a newly allocated space in memory
 *	which contains the contents of s1
 *	followed by the contents of s2, and null terminated.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr = NULL;
	int index, s1_len = 0, s2_len = 0, newlen = 0, str_index = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index]; index++)
		s1_len++;
	for (index = 0; s2[index]; index++)
		s2_len++;
	newlen = s1_len + s2_len + 1;
	ptr = (char *)malloc(newlen);
	if (ptr == NULL)
		return (NULL);
	for (index = 0; s1[index]; index++)
		ptr[str_index++] = s1[index];
	for (index = 0; s2[index]; index++)
		ptr[str_index++] = s2[index];
	return (ptr);
}

