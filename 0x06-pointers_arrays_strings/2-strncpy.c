#include "main.h"
/**
 * _strncpy- copy string into arr of char
 * @dest: pointer to destination arr of chars
 * @src: pointer to source arr of chars
 * @n: number of bytes
 * Return: pointer to dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int s = 0;

while (src[s] != '\0')
s++;

for (s = 0; s < n && src[i]; s++)
{
dest[i] = src[i];
i++;
}
for (i = s; i < n; i++)
dest[i] = '\0';
return (dest);
}
