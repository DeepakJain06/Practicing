#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target){
    for (int i = 0; i <= n; i++){
        if(arr[i]==target){
            
            return arr[i];
        }

    }
        return -1;
}
int main(){

    int arr[] = {3, 4, 56, 6, 4, 3};
    int target = 56;
    int n ;

    int result=linearSearch(arr, 6,target);
    cout << result;
    return 0;
}