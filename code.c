#include <stdio.h>

// Sorting.

void bubblesort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] < arr[j + 1]) // descending order
            {
                int a = arr[j];
                int b = arr[j + 1];
                arr[j] = b;
                arr[j + 1] = a;
            }
        }
    }
}

void selectionsort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallidx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[smallidx] > arr[j]) // ascending order
            {
                smallidx = j;
            }
        }

        int a = arr[smallidx];
        int b = arr[i];
        arr[smallidx] = b;
        arr[i] = a;
    }
}

void insertionsort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;

        while (prev >= 0 && arr[prev] < curr) // descending order
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev+1] = curr;
    }
}

void printarray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\n");
}

void printsortedarray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

int main()
{
    int arr[] = {5, 1, 12, 7, 31, 65, 54, 93};
    int n = 8;
    printarray(arr, n);
    //Choose Sorting Technique.
    printsortedarray(arr, n);

    return 0;
}