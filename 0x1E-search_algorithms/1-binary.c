#include "search_algos.h"

/**
* recursive_search - search for a value in an array using Binary search
* algorithm
* @array: the input array
* @size: the size of the data sample
* @value: value to search for
* Return: index of the number
*/
int recursive_search(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);
	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (mid && size % 2 == 0)
		mid--;

	if (value == array[mid])
		return ((int)mid);

	if (value < array[mid])
		return (recursive_search(array, mid, value));
	mid++;
	return (recursive_search(array + mid, size - mid, value) + mid);
}

/**
* binary_search - returns the index of the number
* @array: input array
* @size: size of the array
* @value: value to search for
* Return: value's index
*/
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
