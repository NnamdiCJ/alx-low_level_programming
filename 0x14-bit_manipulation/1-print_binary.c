#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @s: the number to be printed in binary
 */
void print_binary(unsigned long int s)
{
	if (s > 1)
		print_binary(s >> 1);
	_putchar((s & 1) + '0');
}
