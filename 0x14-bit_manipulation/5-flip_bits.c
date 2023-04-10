#include "main.h"
/**
 * flip_bits - counts the number of bits needed to be
 * flipped to get from one number to another
 * @t: the number
 * @m: the number to flip t to
 * Return: the necessary number of bits to flip to get t to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = t ^ m, bits = 0;

	while (xor > 0)
	{bits += (xor & 1);
		xor >>= 1;
	}
	return (bits);
}
