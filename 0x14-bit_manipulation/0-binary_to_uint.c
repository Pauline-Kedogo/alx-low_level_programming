#include "main.h"

/**
 * binary_to_uint - converts binary string to unsigned int
 * @b: binary string to convert
 *
 * Return: converted unsigned int on success, 0 if string
 * is NULL or contains non-binary characters.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int placeVal = 0;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		placeVal = 2 * placeVal + (b[i] - '0');
	}
	return (placeVal);
}
