//
//  Static.cpp
//  
//
//  Created by Ebubekir on 11/15/16.
//
//

#include <stdio.h>
#include <iostream>

using namespace std;

class Test {
    
    public:
    
        Test(){
            id = ++count;
        };
    
        static int const MAX = 99;
    
        static void show(){
            cout << count << '\n';
        };
    
        int getId(){
            return this->id;
        }
    
    private:
        int id;
        static int count;
};

int Test::count = 0;

Test *createObject(){
    Test *a = new Test();
    return a;
}

Test a(){
    Test b;
    return b;
}

int main(){
    
    Test *test1 = createObject();
    
    cout << test1->getId() << '\n';
    
    Test *test2 = createObject();
    
    cout << test2->getId() << '\n';
    
    Test t = a();
    
    cout << t.getId() << '\n';
    
    Test::show();
    
    return 0;
}
