#include <iostream>
//#include "mylib.h"
#include <cstdint>
#include <math.h>

using namespace std;

class Animal{
    public:
    
        void setName(string newName){ name = newName;};
        void speak() const { cout << "My name is " << name << '\n'; };
    
    private:
        string name;
};

int main(){
    
    const double PI = 3.14;
    Animal dog;
    
    int value = 5;
    
    const int * const ptr = &value; // nor int neither ptr address can't change
    
    cout << *ptr << '\n';
    
    int value1 = 10;
    
    ptr = &value1;
    
    cout << *ptr << '\n';
    
    *ptr = 12;
    
    cout << *ptr << '\n';
    
    return 0;
    
}
