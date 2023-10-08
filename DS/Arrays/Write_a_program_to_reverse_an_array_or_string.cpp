#include<iostream>

using namespace std;

void swaap(int A[], int n)
{
    int start = 0, end = n-1;

    while(start <= end)
    {
        
            int temp = A[start];
            A[start] = A[end];
            A[end] = temp;
            start++;
            end--;
    }
}

void print(int A[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
}


int main(){

    int a[]={1,2,3,4,5,6};
    swaap(a, 6);
    print(a, 6);


    

    return 0;
}