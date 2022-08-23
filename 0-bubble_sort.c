#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using the
 * Bubble sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i , n , new_n;
	int temp;

	if (array == NULL || size < 2)
		return;

	n = size;

	while(n > 0)
	{
		new_n = 0;
		
		for (i = 0; i < n; i++)
		{
			if (array [i] < array[i + 1])
			{
				temp = array [i];
				array[i] = array [i + 1];
				array[i + 1] = temp;
				new_n = i + 1;
				print_array(array,size);
			}
		}

		n = new_n;
	}
}
