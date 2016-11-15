//
//  Inheritance.cpp
//  
//
//  Created by Ebubekir on 11/14/16.
//
//

#include <stdio.h>
#include <iostream>

using namespace std;

class Animal{
    public:
    void speak(){
        cout << "Grrr" << '\n';
    };
};

class Cat: public Animal {
    public:
        void jump(){
            cout << "Cat jumping!" << '\n';
        };
    
};

class Tiger: public Cat {
    public:
        void attackAntelope(){
            cout << "Tiger attacking!" << '\n';
        };
    
};

int main(){
    Animal a;
    a.speak();
    
    Cat cat;
    cat.speak();
    cat.jump();
    
    Tiger tiger;
    tiger.speak();
    tiger.jump();
    tiger.attackAntelope();
    
    return 0;
}
