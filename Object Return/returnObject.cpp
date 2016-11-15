//
//  returnObject.cpp
//  
//
//  Created by Ebubekir on 11/8/16.
//
//

#include <stdio.h>
#include <iostream>

using namespace std;

class Animal{
public:
    Animal(){
        cout << "Constructor called! " << '\n';
    };
    
    ~Animal(){
        cout << "Destructor called! " << '\n';
    };
    
    Animal(const Animal& other):name(other.name){
        cout << "Copy constructor called!" << '\n';
    };
        
    void setName(string newName){
        name = newName;
    };
    
    void speak() const {
        cout << "My name is : " << name << '\n';
    }
    
private:
    string name;
};

Animal *createAnimal(string name){
    Animal *a = new Animal();
    a->setName(name);
    return a;
}

int main(){
    Animal *a = createAnimal("Bob");
    
    a->speak();
    a->setName("Nope");
    a->speak();
    
    cout << sizeof(a) << '\n';
    
    delete a;
    
    return 0;
}
