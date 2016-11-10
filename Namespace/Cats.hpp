//
//  Cats.hpp
//  
//
//  Created by Ebubekir on 11/10/16.
//
//

#ifndef Cats_hpp
#define Cats_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

namespace cat {
    
    const string CATNAME = "CatCat!";
    
    class Cats{
        public :
            Cats();
            ~Cats();
            void saySomething();
        private :
            string name;
    };
}

#endif /* Cats_hpp */
