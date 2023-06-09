#include "main.h"
/**
 * factorial - Retuens the factorial of a given number.
 * @n: The number to find the factorial of.
 *
 * Retun: If n > 0 - the factorial of n.
 * If n < 0 - to indicate an error.
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n -1);

	return (result);
}