#include <iostream>
using namespace std;

void fun(int arr[],int start,int end, int n){
    if (start > end){
        return;
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    fun(arr, 0, n - 1, n);
    return 0;
}