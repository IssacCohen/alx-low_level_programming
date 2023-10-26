#include <stdio.h>
#include "main.h"

/**
 * clear_bit - check the code
 * @n: argument
 * @index: argument
 * Return: Always 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= ~(1UL << index);
		return (1);
	}
	else
	{
		return (-1);
	}
}
