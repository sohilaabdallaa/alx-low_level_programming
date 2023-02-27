#include "main.h"
/**
 * swap_int - get two numbers and swap them togather
 * @a:pointer to integer value in memory
 * @b:pointer to integer
 * Return: void.
 */
void swap_int(int *a, int *b)
{
int tmp;

tmp = 0;
tmp = *a;
*a = *b;
*b = tmp;
}

