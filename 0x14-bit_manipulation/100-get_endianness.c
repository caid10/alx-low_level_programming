#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: If big-endian - 0.
 *         If little-endian - 1.
 */

int get_endianness(void)
{
	int num = 1;
	char *c = (char *)&num;

	if (*c == 1)
		return (1);

	return (0);
}
