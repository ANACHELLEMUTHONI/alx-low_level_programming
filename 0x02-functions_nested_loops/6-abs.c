#include "main.h"

/**
 * _abs - absolute value
 * @a: the parameter to be computed
 * Return: the absolute value
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
