#include "main.h"
/**
 * get_endianness - checks endianness in program.
 * Return: if big-endian - 0, if little-endian -1
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}
