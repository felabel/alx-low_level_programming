#include "main.h"

/**
 * _sqrt_recursion - Calculate the natural square root of a number.
 * @n: The input number.
 * Return: The natural square root of n, or -1 if it does not have a natural square root.
 * _sqrt_helper - Helper function to find the natural square root using recursion.
 * @n: The input number.
 * @guess: The current guess for the square root.
 * Return: The natural square root of n, or -1 if it does not have a natural square root.
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else if (n == 0 || n == 1)
return (n);
else
return (_sqrt_helper(n, 2));
}
int _sqrt_helper(int n, int guess)
{
if (guess * guess == n)
return (guess); 
else if (guess * guess > n)
return (-1);
else
return (_sqrt_helper(n, guess + 1));
}
