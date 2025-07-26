// we have arr any we have the

#include <iostream>
using namespace std;

void fun( int arr[],int query,int n ){
    int count = 0;
    for (int i = 0; i < n;i++){
        if(query == arr[i]){
            count =count+ 1;
        }
        return 1;
}

int main(){
    int arr[] = {4, 3, 2, 2, 1, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int query=0;
    fun(arr[], query, n);
    return 0;
}
