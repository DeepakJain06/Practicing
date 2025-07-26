#include <iostream>
using namespace std;

void fun(int n, int fact){
    if(n<1){
        cout << "Factorial of " << n << " will be : " << fact << endl;
        return;
    }
    if(n>12){
        cout << "it is out of int variable bound! ";
        return;
    }

    fun(n - 1, fact * n);
}

int main(){
    int n;
    cout << "Give the number : ";
    cin >> n;
    int fact = 1;
    fun(n, fact);
    return 0;
}