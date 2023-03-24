#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - excutes a function given as a parameter
 * on each element of an array
 * @arry: array to iterate over
 * @size: size of the array
 * @action: pointer to function used
 */
void arry_iterator(int *arry, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!arry || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
