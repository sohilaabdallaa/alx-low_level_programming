#include <unistd.h>
#include "main.h"
/**
 * main : Entry point of program
 * Description : print using _putchar function
 * Return : 0 succes
*/
int main(void)
{
char arr[] = "_putchar\n";

for (int i = 0; i < sizeof(arr); i++)
{
_putchar(arr[i]);
}
return (0);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
