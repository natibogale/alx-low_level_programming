#include "function_pointers.h"
/**
* int_index - function searches for an integer
* @array: array to be searched
* @size: size of the array
* @cmp: pointer to function
* Return: returns the index of the first element
* for which the cmp fucntion does not return 0;
* -1 if no elements matches or if size <= 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
