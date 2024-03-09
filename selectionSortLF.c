#include <stdio.h>

void selectionSort(int array[], int size, int swapCount[])
{
    int i, j, imin;
    for (i = 0; i < size - 1; i++)
    {
        imin = i; // get index of minimum data
        for (j = i + 1; j < size; j++)
            if (array[j] < array[imin])
                imin = j;

        // placing in the correct position
        int temp;
        temp = array[i];
        array[i] = array[imin];
        array[imin] = temp;

        // count the swap for the current element
        swapCount[imin]++;
    }
}

int main()
{
    int n;
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72}; // initialize the array
    int swapCount[n];

    // Initialize swap count for all elements to 0
    for (int i = 0; i < n; i++)
    {
        swapCount[i] = 0;
    }

    printf("Array before Sorting: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    selectionSort(arr, n, swapCount);

    printf("Array after Sorting: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    printf("Swap Counts:  \n");
    // Print the swap counts for each element
    for (int i = 0; i < n; i++)
    {
        printf("%d: # of times %d is swapped.\n", arr[i], swapCount[i]);
    }

    // Calculate and print the total number of swaps
    int totalSwaps = 0;
    for (int i = 0; i < n; i++)
    {
        totalSwaps += swapCount[i];
    }
    printf("Total # of swaps: %d\n", totalSwaps);

    return 0;
}