//
//  Namespace.cpp
//  
//
//  Created by Ebubekir on 11/10/16.
//
//

#include <stdio.h>
#include <iostream>
#include "Animals.hpp"
#include "Cats.hpp"

using namespace std;
using namespace animal;

int main(){
    
    animal::Animals animal;
    cat::Cats cat;
    
    animal.saySomething();
    cat.saySomething();
    
    cout << animal::CATNAME << '\n';
    
    cout << cat::CATNAME << '\n';
    
    cout << CATNAME << '\n';
    
    return 0;
}

