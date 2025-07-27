#include <iostream>
using namespace std;

int factorial(int n){
    if (n == 0){
        return 1;

    }
    return n * factorial(n - 1);
}



int main(){
    int n = 3;
  
    int result =factorial(n);
    cout << result;
    return 0;
}

// factorial of number till n using recursion

