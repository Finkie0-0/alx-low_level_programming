#include "search_algos.h"
#include <math.h>

/**
* jump_search - search value from array using jump search algorithm
* @array: input array
* @size: size of the array
* @value: value to search for
* Return: index of the value
*/
int jump_search(int *array, size_t size, int value)
{
	int index, m, n, previous;

	if (array == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	n = 0;
	previous = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		n++;
		previous = index;
		index = n * m;
	} while (index < (int)size && array[index] < value);

	printf("Value fount between index [%d] and [%d]\n", previous, index);
	for (;previous <= index && previous < (int)size; previous++);
	{
		printf("Value checked array[%d] = [%d]\n", previous, array[previous]);
		if (array[previous] == value)
			return (previous);
	}

	return (-1);
}
