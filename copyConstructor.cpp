//
//  copyConstructor.cpp
//  
//
//  Created by Ebubekir on 11/3/16.
//
//

#include <stdio.h>
#include <iostream>

using namespace std;

class Animal{
    public:
        Animal(){ cout << "Class created!" << '\n'; }; // constructor
        Animal(const Animal& other): name("Hey") { cout << "Copy Constructor! " << '\n'; }; // copy constructor "can't call any other non const methods from here because of const"
        ~Animal(){ cout << "Class destroyed!" << '\n';}; // destructor
        void setName(string newName) { name = newName;};
        void sayName() const { cout << "Name is : " << name << '\n';}; // can't change any variable in const functions
    private:
        string name;
};

int main(){
    
    Animal animal1;
    
    animal1.setName("Bobby!");
    
    Animal animal2 = animal1;
    
    Animal animal3(animal1);
    
    cout << "Original class " << flush;
    animal1.sayName();
    
    cout << "Copy class " << flush;
    animal2.sayName();
    
    
    
    
    return 0;
}
