#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using the
 * Selection sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, n, temp;

	if (array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		for (n = 0; n < size - 1; n++)
		{
			if (array[n] > array[n + 1])
			{
				temp = array[n];
				array[n] = array[n + 1];
				array[n + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
