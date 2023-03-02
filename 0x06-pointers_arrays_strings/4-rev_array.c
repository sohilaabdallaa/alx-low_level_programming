#include "main.h"
/**
 * reverse_array - reverse numbers of integer array
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int i = 0;
int tmp;
int *ptr;
ptr = &(a[n - 1]);
while ((n - 1) >= i)
{
tmp = a[i];
a[i] = *(ptr);
*ptr = tmp;
i++;
ptr--;
n--;
}
}

