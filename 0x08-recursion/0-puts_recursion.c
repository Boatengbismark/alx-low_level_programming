/**
 * _puts_recursion - Prints a string
 * @s: The string to be printed.
 */


void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s++);
	}
	else
	{
		_putchar('\n');
	}
}
