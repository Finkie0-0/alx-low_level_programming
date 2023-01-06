#include "search_algos.h"

/**
* interpolation_search - search for a value in an array using the
* interpolation search algorithm
* 
* @array: input array
* @size: size of the array
* @value: must find
* Return: index of the value
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, min, max;
	double d;

	if (array == NULL)
		return (-1);

	min = 0;
	max = size - 1;

	while (size)
	{
		d = (double)(max - min) / (array[max] - array[min]) * (value - array[min]);
		pos = (size_t)(min + d);
		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		if (array[pos] == value)
			return ((int)pos);
		if (array[pos] < value)
			min = pos + 1;
		else
			max = pos - 1;

		if (min == max)
			break;
	}
	return (-1);
}
