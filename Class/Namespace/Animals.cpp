//
//  Animals.cpp
//  
//
//  Created by Ebubekir on 11/10/16.
//
//

#include "Animals.hpp"
#include <iostream>

using namespace std;

namespace animal {
    Animals::Animals(){
        cout << "Constructor called!" << '\n';
    };
    
    Animals::~Animals(){
        cout << "Destructor called!" << '\n';
    };
    
    void Animals::saySomething(){
        cout << "I am Animals" << '\n';
    }
};

