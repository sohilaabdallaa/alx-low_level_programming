#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 * Description: prints 'Holberton \n'
 * Return: Always 0 (success)
 */
int main(void)
{
char arr[] = "_putchar\n";
int i = '0';
while (arr[i] != '\n')
{
i++;
_putchar(arr[i]);
}
return (0);
}
