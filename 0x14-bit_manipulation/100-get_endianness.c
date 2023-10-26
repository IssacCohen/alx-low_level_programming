#include <stdio.h>
#include "main.h"

/**
 * get_endianness - check the code
 * Return: Always 0.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *byte_ptr = (unsigned char *)&num;

	return ((byte_ptr[0] == 1) ? 1 : 0);
}
