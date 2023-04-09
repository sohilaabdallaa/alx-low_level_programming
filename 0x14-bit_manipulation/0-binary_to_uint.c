#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - convert binary number to unsigned integer number.
 * @b:pointer to string if 0 and 1 characters.
 * Return:0 if b is NULL or
 *	there is one or more chars in the string b that is not 0 or 1
 *	otherwise, converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int con_num = 0;
	unsigned int i = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] != '0' &&  b[i] != '1')
			return (0);
		i++;
	}
	i = 0;
	while (b[i])
	{
		con_num <<= 1;
		if (b[i] == '1')
			con_num += 1;
		i++;
	}
	return (con_num);
}
