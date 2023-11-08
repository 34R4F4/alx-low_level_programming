
/**
 * array_iterator - f
 * @array: 1
 * @size: 2
 * @action: 3
 * Return: v
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (size > 0 && action)
	{
		for (int i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
