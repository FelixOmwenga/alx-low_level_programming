#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - assign memory using malloc
  * @b: memory size
  * Return: A pointer to the allocated memory
  */

void *malloc_checked(unsigned int b)
{
	void *mem;
	
	mem = malloc(b);

	if (mem == NULL)
 		exit(98);

 	return (mem);
 }
