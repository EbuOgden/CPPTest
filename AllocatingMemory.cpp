//
//  AllocatingMemory.cpp
//  
//
//  Created by Ebubekir on 11/9/16.
//
//

#include <stdio.h>
#include <iostream>

using namespace std;

class Animal{
private:
    string name;
public:
    Animal(){
        cout << "Constructor called" << '\n';
    };
    
    ~Animal(){
        cout << "Destructor called" << '\n';
    };
    
    Animal(const Animal& other): name(other.name){
        cout << "Copy Constructor Called! " << '\n';
    };
    
    void setName(string newName){
        name = newName;
    };
    
    void speak(){
        cout << "My name is : " << name << '\n';
    };
};

class Alphabet{
private:
    string name;
public:
    Alphabet(){
        cout << "Constructor called!" << '\n';
    };
    
    ~Alphabet(){
        cout << "Destructor called!" << '\n';
    };
    
    Alphabet(const Alphabet& other): name(other.name){
        cout << "Copy constructor called!" << '\n';
    };
    
    void setName(char newName){
        name = newName;
    };
    
    void speak(){
        cout << "My name is : " << name << '\n';
    }
    
};

int main(){
    
    Alphabet *alp = new Alphabet[26];
    short int i = 97; // a is 97 in ASCII
    unsigned short int counter;
    
    for(counter = 0; counter < 26; counter++){
        alp[counter].setName(char(i));
        alp[counter].speak();
        i++;
    };
    
    delete [] alp;
    
    return 0;
}
