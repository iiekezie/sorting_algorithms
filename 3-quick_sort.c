#include "sort.h"

/**
 * swap - Swaps two integers in an array
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * partition - Partitions an array using the Lomuto partition scheme
 * @array: Array to partition
 * @low: Starting index of the partition
 * @high: Ending index of the partition
 * @size: Size of the array
 * Return: Index of the pivot
 */
int partition(int *array, int low, int high, size_t size)
{
    int pivot = array[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            swap(&array[i], &array[j]);
            print_array(array, size);
        }
    }
    swap(&array[i + 1], &array[high]);
    print_array(array, size);
    return (i + 1);
}

/**
 * quicksort - Recursive function to implement Quick sort
 * @array: Array to sort
 * @low: Starting index of the array
 * @high: Ending index of the array
 * @size: Size of the array
 */
void quicksort(int *array, int low, int high, size_t size)
{
    if (low < high)
    {
        int pi = partition(array, low, high, size);

        quicksort(array, low, pi - 1, size);
        quicksort(array, pi + 1, high, size);
    }
}

/**
 * quick_sort - Sorts an array of integers in ascending order using Quick sort
 * @array: Array to sort
 * @size: Size of the array
 */
void quick_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
        return;
    quicksort(array, 0, size - 1, size);
}
