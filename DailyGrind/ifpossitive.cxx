#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout << " Your Number :";
    cin >> num;
    if(num >=1){
        cout << "Your Number is Positive!" << endl;
    }
    else if(num==0){
        cout << "Your Number is Zero!" << endl;
    }
    else if(num <0){
        cout << "Your Number is negative!" << endl;
    }
    return 0;
}