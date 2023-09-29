#include "main.h"

/**
 * is_prime_number- check if the number is prime
 * @n: The number.
 * Return: The result of x^y, or -1 if y is negative.
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
for (int i = 2; i * i <= n; i++)
{
if (n % i == 0)
{
_putchar(0);
return (0);
}
else
{
_putchar(1);
return (1);
}
}
return (is_prime_number(n));
}
