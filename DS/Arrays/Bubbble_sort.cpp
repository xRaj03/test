#include<iostream>

using namespace std;

void bubbleSort(int a[], int n)
{

    bool swapped = false;

    for(int i = 0; i<n-1; i++)
    {
        swapped = false;
        for(int j=0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
                swap(a[j], a[j+1]);
                swapped = true;
        }
        if(swapped == false)
            break;
    }
}

void printArray(int a[], int n)
{
    for(int i=0; i<n; i++)
        cout<<a[i];
}

int main(){

    int a[]={1, 2, 4, 3, 6, 7};
    int n = sizeof(a) / sizeof(a[0]);
    bubbleSort(a, n);
    printArray(a, n);

    return 0;
}