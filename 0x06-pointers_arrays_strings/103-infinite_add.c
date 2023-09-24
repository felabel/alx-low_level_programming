#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result (r), or 0 if the result cannot be stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int sum;
	int index_n1 = strlen(n1) - 1;
	int index_n2 = strlen(n2) - 1;
	int index_r = size_r - 1;
	r[index_r] = '\0'; // Null-terminate the result string

	while (index_n1 >= 0 || index_n2 >= 0 || carry > 0)
	{
		sum = carry;
		if (index_n1 >= 0)
			sum += n1[index_n1] - '0';
		if (index_n2 >= 0)
			sum += n2[index_n2] - '0';
		if (index_r < 0)
			return (0); 
		r[index_r] = (sum % 10) + '0'; 
    carry = sum / 10; 
		index_n1--;
		index_n2--;
		index_r--;
	}
	return (r + index_r + 1); 
}
