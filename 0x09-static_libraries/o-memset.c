#include "main.h"
/**
 * _memset - filling a block of memory with a specific value
 * @s: starting address of memory
 * @b: values required
 * @n: number of bytes that needs change
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
        int i = 0;

        for (; n > 0; i++)
        {
                s[i] = b;
                n--;
        }
        return (s);
}

