#include <iostream>
using namespace std;

/// @brief 
/// @param n 
/// @param i 
void fun(int n, int i){
    while(i>n){
        return;
    }

    cout << n << " ";
    fun( n-1,i);
}

int main(){
    int n;
    cout << "Enter your Number N : ";
    cin >> n;
    fun(n, 1);
    return 0;
}