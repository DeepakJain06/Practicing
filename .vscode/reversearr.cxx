// rever the array using the recursion


#include <iostream>
using namespace std;

void fun(int arr[],int start, int end, int n){
    if(start>=end){
        for (int i = 0; i < n;  i++)
        {
            cout << arr[i] << " ";
        }
        return;
    }

    swap(arr[start],arr[end]);
    fun(arr, start+ 1, end -1,n);
}

int main(){
    int arr[5] = { 5, 4, 3, 2, 1 };

    int n = sizeof(arr)/sizeof(arr[0]);
    fun(arr, 0, n-1,n);
    return 0;
    

}
