#include <bits/stdc++.h>
using namespace std;

int nNatualNumber(int n, int i ){
    if(i>n){
        return i;
    }

    cout << i << endl;
    nNatualNumber(n, i + 1);
    
}

int main(){
    int n = 10;
    int i = 1;
    int result = nNaturalNumber(n,i);
    cout << "Natual numbers are : " << result << endl;
    return 0;
}