#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: prints base 16 number
 *Return: Always 0 (Success)
 */
int main(void)
{
char c;
char d = '0';

while (d <= '9')
{
putchar(d);
d++;
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
