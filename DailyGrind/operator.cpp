#include <iostream>
using namespace std;

class base{
    public:

    void dilu(){
        cout << "hellow ji!" << endl;
    }

    void dilu(string n){
        cout << "helooow ji!"  << n <<endl;
    }
};

int main(){
    base obj1;
    obj1.dilu("deepak");
    

    return 0;
}