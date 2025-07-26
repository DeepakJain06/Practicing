#include <bits/stdc++.h>
using namespace std;
int nNaturalNumber(int n, int i){
    if(i>n){
        return i;
    }
    cout << i << endl;
    nNaturalNumber(n, i + 1);
}
int main(){
    int n = 15;
    int i = 1;
    int result = nNaturalNumber( n, i);
    cout << result;
    return 0;

}