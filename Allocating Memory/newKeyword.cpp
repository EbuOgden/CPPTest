//
//  newKeyword.cpp
//  
//
//  Created by Ebubekir on 11/3/16.
//
//

#include <stdio.h>
#include <iostream>

using namespace std;

class Animal{
    public :
    
        Animal(){
            cout << "Constructor called! " << '\n';
        };
    
        Animal(const Animal &other) : name(other.name){
            cout << "Copy constructor called! " << '\n';
        };
    
        ~Animal(){
            cout << "Destructor called!" << '\n';
        };
    
        void setName(string newName){
            name = newName;
        };
    
        void sayHello() const {
            cout << "Name is : " << name << '\n';
        };
    
    private :
        string name;
};


int main(){
    
    Animal *ptrForClass = new Animal(); // allocating memory with "new" tag, also pointer using 8 byte in memory it is helping for memory saving
    
    ptrForClass->setName("Mike!"); // we should use -> when using pointer
    
    ptrForClass->sayHello();
    
    cout << sizeof(ptrForClass) << '\n';
    
    //ptrForClass = NULL; // pointer shows 0
    
    delete ptrForClass; // If allocating memory, you should delete it after your work done, because of the memory leak
    
    cout << sizeof(ptrForClass) << '\n';
    
    return 0;
}
