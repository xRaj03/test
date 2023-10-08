#include<iostream>

using namespace std;

void solve( int arr[], int n){

    int i, j, temp;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[j] == i){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                break;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[] = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1};
    int n = sizeof(arr) / sizeof(arr[0]);
    solve(arr, n);

    return 0;
}