#include <iostream>
using namespace std;

int secondLargest(int arr[], int n)
{
    int largest = 0, secondLargest = -1;

    // finding the largest element in the array
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }

    // finding the largest element in the array excluding
    // the largest element calculated above
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != largest)
        {
            // first change the value of second largest
            // as soon as the next element is found
            if (secondLargest == -1)
                secondLargest = arr[i];
            else if (arr[i] > secondLargest)
                secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main()
{
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<secondLargest(arr, n);
}