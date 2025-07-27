#include <bits/stdc++.h>
using namespace std;
class Animal{
    private:
        int age;
        int weight;
        private:
        string owner;
            void nameofclass()
            {
                cout << "this is the base class " << endl;
            }
            
};

class dog{
    public:
        int name;
        int age;
        void nameofthefun(){
            cout << "this is the child class";
        }
};
class germansefert:public Animal, public dog{
    public:
        int weight;
};
int main(){
    Animal ob1;
    ob1.age;
    cout << ob1.age;

    return 0;
}