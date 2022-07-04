#include <stdio.h>
/**
*main - print a num pair from 00-99 but no repeats (00 01, 00 02, 00 03,...)
*Return: Always 0 (Success)
*/
int main(void)
{
int ch;
int n;
for (ch = 48; ch <= 57; ch++) /*print first two digit combo*/
{
for (n =48; n <= 57; n++)
{
putchar(ch);
putchar(n);
if (ch != 57 || n != 57)
{
putchar(47);
putchar(32);
}
}
}
putchar(10);
return (0);
}
