#include<iostream>
#include<algorithm>
using namespace std; 

int missing(int arr[], int n){
    sort(arr, arr+n);
    int j = arr[0];
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != j)
        {
            j++;
            return j;
        }
        
    }
    return -1;
}

int main(){

    int arr[]={5,7,9,8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<missing(arr, n);

    return 0;
}