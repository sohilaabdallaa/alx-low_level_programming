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
int j = 0;

while (src[s] != '\0')
s++;
if (n > s)
n = s;
while (n--)
{
dest[i] = src[j];
i++;
j++;
if ( src[j] == '\0')
{
dest[i++] = '\0';
}
}
return (dest);
}
