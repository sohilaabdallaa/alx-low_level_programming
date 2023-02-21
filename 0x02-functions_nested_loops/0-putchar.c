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
char c;
int i = 0;
while (arr[i] != '\n')
{
c = arr[i];
i++;
_putchar(c);
}
return (0);
}
