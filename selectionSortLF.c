#include <stdio.h>

// A utility function to print an array of size n
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Function to perform selection sort and count swaps
void selectionSortWithSwaps(int arr[], int n)
{
    int i, j, min_idx, temp;
    int swaps[n]; // Array to store the number of swaps for each element

    // Initialize swaps array with zeros
    for (i = 0; i < n; i++)
        swaps[i] = 0;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Count the swap for the minimum element
        swaps[min_idx]++;

        // Swap the found minimum element with the first element
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }

    // Print the number of swaps for each element
    for (i = 0; i < n; i++)
        printf("%d: # of times %d is swapped\n", arr[i], swaps[i]);
}

int main()
{
    int arr0[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int arr[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int n = 9; // size of the array

    printf("\narray1:\n");
    printArray(arr0, n);
    selectionSortWithSwaps(arr0, n);
    printArray(arr0, n);

    printf("\narray2:\n");
    printArray(arr, n);
    selectionSortWithSwaps(arr, n);
    printArray(arr, n);

    printf("\n");

    return 0;
}
