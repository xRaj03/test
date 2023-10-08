#include<iostream>

using namespace std;

void solve(int arr[], int n){
    int b[n];
    int index = 0;
    for(int i=0; i<n; i++){
        if(arr[i]%2 == 0){
            b[index] = arr[i];
            index++;
        }
        

    }
    for(int i=0; i<n; i++){
        if(arr[i]%2 != 0){
            b[index] = arr[i];
            index++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
}

int main(){

    int arr[] = {1, 9, 5, 3, 2, 6, 7, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    solve(arr, n);
    

    return 0;
}