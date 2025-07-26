#include <bits/stdc++.h>
using namespace std;

int nNaturalNumber(int n, int i){
    if(n<=i){
        return n;
    }
    cout << n << endl;
    nNaturalNumber(n - 1, i);
   
   
}

int main(){
    int n =3;
    int i = 0;
    int result = nNaturalNumber(n, i);
    cout << result;

    return 0;
}