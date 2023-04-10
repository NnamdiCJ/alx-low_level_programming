#include "main.h"
/**
 * clear_bit - sets the value of a bit at a given index to 0
 * @t: a pointer to the bit
 * @index: the index to set the value at - indices starts at 0
 * Return: if an error occurs = -1, otherwise = 1
 */
int clear_bit(unsigned long int *t, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*t &= ~(1 << index);
	return (1);
}
