#include "function_pointers.h"

/*
 * Task: 2. To hell with circumstances; I create opportunities
 * Creator: Jared Naicker
 */

/**
  * int_index - ...
  * @array: ...
  * @size: ...
  * @cmp: ...
  *
  * Return: ...
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
