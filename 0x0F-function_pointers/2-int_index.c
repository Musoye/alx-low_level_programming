/**
 * int_index - chevck if a number is equal or not
 * @array: the array
 * @size: the size
 * @cmp: the function pointer
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0)
		return (-1);
	for ( ; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}
	return (-1);
}
