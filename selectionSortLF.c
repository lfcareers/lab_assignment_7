#include <stdio.h>

// A utility function to print an array of size n
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx, temp;
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        // Swap the found minimum element with the first element
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

int main()
{
    int arr0[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    // arr0 = (int *)malloc(n * sizeof(int));

    int arr[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    // arr = (int *)malloc(n * sizeof(int));

    int n = 9; // size of the array

    printf("\n");

    printArray(arr0, n);

    selectionSort(arr0, n);

    printArray(arr0, n);

    printf("\n");

    printArray(arr, n);

    selectionSort(arr, n);

    printArray(arr, n);

    printf("\n");

    return 0;
}
