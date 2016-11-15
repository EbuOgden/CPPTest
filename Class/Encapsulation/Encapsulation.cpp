//
//  Encapsulation.cpp
//  
//
//  Created by Ebubekir on 11/14/16.
//
//

#include <stdio.h>
#include <iostream>

using namespace std;

class Frog{
    private:
        string name;
    
    private:
        string getName(){
            return this.name;
        }
    
    public:
        Frog(string newName): name(newName){};
    
        void info(){
            cout << "My name is: " << getName() << '\n';
        };
};

int main( ){
    Frog frog("Muppet");
    frog.info  ();
    
    return 0;
}
