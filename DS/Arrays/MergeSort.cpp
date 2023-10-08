#include <iostream>

using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // Copy values
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // Merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[s++] = first[index1++];
        }
        else
        {
            arr[s++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[s++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[s++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
        return;

    int mid = (s + e) / 2;

    // Left part sort
    mergeSort(arr, s, mid);

    // Right part sort
    mergeSort(arr, mid + 1, e);

    merge(arr, s, e);
}

int main()
{

    int arr[] = {2, 4, 1, 5, 3, 9, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
