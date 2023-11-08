
/**
 * print_name - f
 * @name: 1
 * @f: 2
 * Return: v
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
