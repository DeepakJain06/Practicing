#include <iostream>
using namespace std;
int factorial(int n,int fact){
    if(n<=0){
        return n;
    }

   return factorial(n,fact*n-1);

}

int main(){
    int n = 5;
    int fact = 1;
    int result =factorial(n,fact);
    cout << result;

    return 0;
}
// n=5 5*4*3*2*1 


