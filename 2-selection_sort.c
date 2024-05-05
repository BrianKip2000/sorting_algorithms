#include "stdio.h"
#include "stdlib.h"
#include "sort.h"


/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: array to be sorted
 * @size: number of elements in the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
size_t i, j, min;
int tmp;
if (array == NULL || size <= 1)
{
return;
}
for (i = 0; i < size - 1; i++)
{
min = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[min])
{
min = j;
}
}
if (min != i)
{
tmp = array[i];
array[i] = array[min];
array[min] = tmp;
print_array(array, size);
}
}
}
