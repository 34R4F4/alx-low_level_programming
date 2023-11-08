
/**
 * int_index - f
 * @array: 1
 * @size: 2
 * @cmp: 3
 * Return: v
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);

	if (array && size)
	{
		int i = 0;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	else
	{
		return (-1);
	}
}
