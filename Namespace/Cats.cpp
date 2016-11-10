//
//  Cats.cpp
//  
//
//  Created by Ebubekir on 11/10/16.
//
//

#include "Cats.hpp"
#include <iostream>

using namespace std;

namespace cat {
    Cats::Cats(){
        cout << "Constructor called! " << '\n';
    }
    
    Cats::~Cats(){
        cout << "Destructor called!" << '\n';
    }
    
    void Cats::saySomething(){
        cout << "I am Cats!" << '\n';
    }

}

