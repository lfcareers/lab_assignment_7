// labs assignmetn 7 - bubble sort
#include <stdio.h>

// recursive bubble sort algorithm
void bubble_sort(int arr[], int n, int swapCount[])
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // swap values
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                // set counters
                swapCount[j]++;
                swapCount[j + 1]++;
            }
        }
    }
}

// recursive selection sort algorithm
void selection_sort(int arr[], int n)
{
    int i, j, minIndex, temp;

    for (i = 0; i < n - 1; i++)
    {
        // Assume the current index is the minimum
        minIndex = i;

        // Find the index of the minimum element in the unsorted part
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main()
{
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = sizeof(arr) / sizeof(arr[0]);
    int swapCount[n];

    // Initialize swap count for all elements to 0
    for (int i = 0; i < n; i++)
    {
        swapCount[i] = 0;
    }

    bubble_sort(arr, n, swapCount);

    // print the array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nSwap Counts:  \n");
    // Print the swap counts for each element
    for (int i = 0; i < n; i++)
    {
        printf("%d: swapped %d times.\n", arr[i], swapCount[i]);
    }

    // Calculate and print the total number of swaps
    int totalSwaps = 0;
    for (int i = 0; i < n; i++)
    {
        totalSwaps += swapCount[i];
    }
    printf("Total # of swaps: %d\n", totalSwaps);
    printf("\n");

    return 0;
}