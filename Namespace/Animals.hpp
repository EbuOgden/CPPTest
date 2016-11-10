//
//  Animals.hpp
//  
//
//  Created by Ebubekir on 11/10/16.
//
//

#ifndef Animals_hpp
#define Animals_hpp

#include <stdio.h>
#include <iostream>

using namespace std;


namespace animal{
    
    const string CATNAME = "AnimalCat!";
    
    class Animals{
        public :
            Animals();
            ~Animals();
            void saySomething();
        private :
            string name;
    };

}

#endif /* Animals_hpp */
