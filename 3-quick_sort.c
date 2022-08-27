#include "sort.h"

/**
 * swap - Swaps the position
 * @array: array
 * @number1: par
 * @number2: par
 * @size: size
 **/
void swap(int *array, int *number1, int *number2, size_t size)
{
    int s_position = *number1;

    *number1 = *number2;
    *number2 = s_position;
    print_array(array, size);
}
/**
 * partition - Makes a partition
 * @array: array
 * @start: start
 * @end: end
 * @size: size
 * Return: return
 **/
int partition(int *array, int start, int end, size_t size)
{
    int pivot = array[end];
    int index = start;
    int i = 0;

    for (i = start; i < end; i++)
    {
        if (array[i] <= pivot)
        {
            if (index != i)
            {
                swap(array, &array[i], &array[index], size);
            }
            index++;
        }
    }
    if (index != end)
        swap(array, &array[end], &array[index], size);
    return (index);
}
/**
 * quickSort - quicksort
 * @array: array
 * @low: start
 * @high: end
 * @size: size
 **/
void quickSort(int *array, int low, int high, size_t size)
{
    int p = 0;

    if (low < high)
    {
        p = partition(array, low, high, size);
        quickSort(array, low, p - 1, size);
        quickSort(array, p + 1, high, size);
    }
}

/**
 * quick_sort - sorts an array of integers using the quick sort algorithm
 * @array: array
 * @size: size
 */

void quick_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
        return;

    quickSort(array, 0, size - 1, size);
}
