#include <bits/stdc++.h>
using namespace std;


void kLargest(int arr[], int n , int k){
    sort(arr, arr + n, greater<int>());

    for (int i = 0; i < k; i++){
        cout << arr[i] << " ";

    }
}

int main(){

    int arr[] = {1, 45, 65, 23, 2, 26, 543};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 10000000000000;
    kLargest(arr, n, k);

    return 0;
}