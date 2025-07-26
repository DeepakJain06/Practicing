#include <bits/stdc++.h>
using namespace std;

int nNaturalNumber(int n, int target, int sum) {
    if(n>target){
        
        return sum;
    }

   return nNaturalNumber(n+1, target, sum + n);

}

int main(){
    int n = 1;
    int target =10;
    int sum = 0;
    int result = nNaturalNumber(n, target, sum);
    cout << result;
}

