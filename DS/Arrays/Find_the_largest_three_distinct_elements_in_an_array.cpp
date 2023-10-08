#include<iostream>

using namespace std;

void print3largest(int arr[], int arr_size)
{
   int first, second, third;

   if(arr_size<3)
   {
        cout<<"Invalid Input"<<endl;
   } 

   third = second = first = INT_MIN;
   for(int i=0; i<arr_size; i++)
   {
        if(arr[i]>first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first)
        {
            third =  second;
            second =  arr[i];
        }
        else if(arr[i] > third && arr[i] != second)
        {
            third = arr[i];
        }
   }
   cout<<"Three largest elements are :" <<first<<" "<<second<<" "<<third<<" "<<endl;

}

int main(){

    int a[]{10, 4, 3, 50, 23, 90};
    int n = sizeof(a) / sizeof(a[0]);

    print3largest(a, n);

    return 0;
}