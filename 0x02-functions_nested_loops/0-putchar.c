#include "main.h"

/**
 * main - Entry point
 * Description: prints '_putchar \n'
 * Return: Always 0 (success)
 */
int main(void)
{
char arr[] = "_putchar\n";
char c;
int i = 0;
while (arr[i] != '\0')
{
c = arr[i];
i++;
_putchar(c);
}
return (0);
}
>>>>>>> 0679613b40516a415c28e2cff7a3c364bf3f8abf
