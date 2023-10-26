#include <stdio.h>
#include "main.h"

/**
 * get_bit - check the code
 * @n: argument
 * @index: argument
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		unsigned long int mask = 1UL << index;

		return ((n & mask) ? 1 : 0);
	}
	else
	{
		return (-1);
	}
}
