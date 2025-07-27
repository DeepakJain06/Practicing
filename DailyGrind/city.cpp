#include <iostream>
using namespace std;

int sumOfNNantural(int n,int i){

    if(i>n){
        return i;
    }
    
   return sumOfNNantural(n, i+1);
    
}

int main(){
    int n = ;
    int i = 1;

    int result = sumOfNNantural(n, i);
    cout << result;
    return 0;
}