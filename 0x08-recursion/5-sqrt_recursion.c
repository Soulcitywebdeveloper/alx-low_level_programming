#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural square root of a number, if it exists
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have a natural
 * square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1) /* base case */
		return (n);
	return (helper(1, n, n));
}

/**
 * helper - recursively finds the natural square root of a number
 * @start: the starting point of the search
 * @end: the ending point of the search
 * @n: the original number we are trying to find the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have a natural
 * square root
 */
int helper(int start, int end, int n)
{
	int mid = (start + end) / 2;

	if (start > end) /* not found */
		return (-1);
	if (mid * mid == n) /* found */
		return (mid);
	if (mid * mid > n) /* search left */
		return (helper(start, mid - 1, n));
	else /* search right */
		return (helper(mid + 1, end, n));
}
