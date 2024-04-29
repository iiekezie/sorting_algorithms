#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * merge - Merge two sorted subarrays into one sorted array.
 * @array: The original array.
 * @left: The left index of the subarray.
 * @mid: The middle index of the subarray.
 * @right: The right index of the subarray.
 * @temp_array: The temporary array to store the merged elements.
 */
void merge(int *array, size_t left, size_t mid, size_t right, int *temp_array)
{
    size_t i, j, k;
    size_t n1 = mid - left + 1;
    size_t n2 = right - mid;

    printf("[left]: ");
    print_array(array + left, n1);
    printf("[right]: ");
    print_array(array + mid + 1, n2);

    for (i = 0; i < n1; i++)
        temp_array[i] = array[left + i];
    for (j = 0; j < n2; j++)
        temp_array[n1 + j] = array[mid + 1 + j];

    i = 0;
    j = 0;
    k = left;

    while (i < n1 && j < n2)
    {
        if (temp_array[i] <= temp_array[j + n1])
            array[k++] = temp_array[i++];
        else
            array[k++] = temp_array[j++ + n1];
    }

    while (i < n1)
        array[k++] = temp_array[i++];
    while (j < n2)
        array[k++] = temp_array[j++ + n1];

    printf("[Done]: ");
    print_array(array + left, n1 + n2);
}

/**
 * merge_sort_recursive - Recursively sort the subarrays.
 * @array: The original array.
 * @left: The left index of the subarray.
 * @right: The right index of the subarray.
 * @temp_array: The temporary array to store the merged elements.
 */
void merge_sort_recursive(int *array, size_t left, size_t right, int *temp_array)
{
    if (left < right)
    {
        size_t mid = left + (right - left) / 2;

        merge_sort_recursive(array, left, mid, temp_array);
        merge_sort_recursive(array, mid + 1, right, temp_array);

        merge(array, left, mid, right, temp_array);
    }
}

/**
 * merge_sort - Sort an array of integers in ascending order
 *               using the Merge sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the merging process.
 */
void merge_sort(int *array, size_t size)
{
    int *temp_array = malloc(size * sizeof(int));

    if (temp_array == NULL)
        return;

    merge_sort_recursive(array, 0, size - 1, temp_array);

    free(temp_array);
}
