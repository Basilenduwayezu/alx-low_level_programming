#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: sizeof int
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
void *bsl;

bsl = malloc(b);
if (bsl == NULL)
exit(98);
else
return (bsl);
}
