#include<iostream>

using namespace std;

int Lpartition(int arr[], int l, int r){
    int piviot = arr[r];
    int i = (l - 1);
    for(int j = l; j<=r-1; j++){
        if(arr[j] < piviot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[r]);
    return (i + 1);

}

void qSort(int arr[], int l, int r){
    if(l < r){
        int p = Lpartition(arr, l, r);
        qSort(arr, l, p-1);
        qSort(arr, p+1, r);
    }

}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){

    int arr[]={10, 80, 30, 90, 40, 50, 70};
    int n = sizeof(arr) /  sizeof(arr[0]);

    qSort(arr, 0, n-1);
    printArray(arr, n);

    

    return 0;
}