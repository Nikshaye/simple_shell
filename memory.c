#include "shell.h"

/**
 * bfree - Frees pointer for the address
 * @ptr: Address of the point.
 * Return: 1 if freed, otherwise 0.
 */

int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
