#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - the function that takes in different
 * function to work on it
 * @array: the array to work on
 * @size: size of the array
 * @action: the operation to perform on it
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
