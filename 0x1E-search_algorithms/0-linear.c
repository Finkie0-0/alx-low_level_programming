#include "search_algos.h"

/**
* linear_search - searches for a value in an array using the linear search
* algorithm
* @array: the pointer to the array's first element that is being searched
* @size: the number of elements in an array
* @value: is the value to search through the array
* Return: NULL if not found and -1 should be returned
*/
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		if (array[i] != value)
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			return (i);
		}
	}
	return (-1);
}
