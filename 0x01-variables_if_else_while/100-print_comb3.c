#include <stdio.h>
/**
* main - Print combinations of two digit numbers
* Return: Always 0 (Success)
*/
int main(void)
{
int tens;
int ones;
for (tens = 48; tens <= 57; tens++)
{
for (ones = 49; ones <= 57; ones++)
{
if (ones > tens)
{
putchar(tens);
putchar(ones);
if (tens != 56 || ones != 57)
{
putchar(44);
putchar(32);
}
}
}
putchar('\n');
return (0);
}
