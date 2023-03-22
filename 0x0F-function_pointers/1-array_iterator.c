#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function given as a parameter on each element of array
 * @size:  type of size_t typedef
 * @action: points to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (action == NULL)
		return;
	if (size <= 0)
		return;
	if (array == NULL)
		return;
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
