#include < unistd.h >
/**
 * putchar - Writes the character c stdout
 * @c: The character to print
 *
 * Return: success 1
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c);
{
	return (write(1, &c, 1))
}
