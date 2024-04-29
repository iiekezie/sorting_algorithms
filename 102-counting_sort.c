#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_max - Get the maximum value in an array of integers.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Return: The maximum integer in the array.
 */
int get_max(int *array, size_t size)
{
    size_t i;
    int max = array[0];

    for (i = 1; i < size; i++)
    {
        if (array[i] > max)
            max = array[i];
    }
    return max;
}

/**
 * counting_sort - Sort an array of integers in ascending order
 *                 using the counting sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the counting array after setting it up.
 */
void counting_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
        return;

    int max = get_max(array, size);
    int *count = malloc((max + 1) * sizeof(int));
    if (count == NULL)
        return;

    int *sorted = malloc(size * sizeof(int));
    if (sorted == NULL)
    {
        free(count);
        return;
    }

    size_t i;
    for (i = 0; i <= (size_t)max; i++)
        count[i] = 0;

    for (i = 0; i < size; i++)
        count[array[i]]++;

    printf("%d", count[0]);
    for (i = 1; i <= (size_t)max; i++)
        printf(", %d", count[i]);
    printf("\n");

    for (i = 1; i <= (size_t)max; i++)
        count[i] += count[i - 1];

    for (i = size; i > 0; i--)
    {
        sorted[count[array[i - 1]] - 1] = array[i - 1];
        count[array[i - 1]]--;
    }

    for (i = 0; i < size; i++)
        array[i] = sorted[i];

    free(count);
    free(sorted);
}
