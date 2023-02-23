#include <unistd.h>

#include <stdio.h>

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
int main()
{
    int i = 0;
    char arr[] = "_putchar";
    for (i = 0; i < sizeof(arr); i++)
        _putchar(arr[i]);

    return (0);
}

