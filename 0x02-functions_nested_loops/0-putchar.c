#include <unistd.h>
#include "main.h"
int main(void)
{
    char arr[] = "_putchar\n";
    for (int i = 0; i < sizeof(arr); i++)
    {
        _putchar(arr[i]);
    }
    
    return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}