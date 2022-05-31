#include "main.h"

/**
 * get_bit - get the bit at a specific index.
 * @n: number to check
 *
 * Return: bit at given index on success, -1 on failuire
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 99)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
