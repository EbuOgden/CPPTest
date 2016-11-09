//
//  Arrays and Functions.cpp
//  
//
//  Created by Ebubekir on 11/9/16.
//
//

#include <stdio.h>
#include <iostream>

using namespace std;

void change1(int *a){
    *a = 5;
    cout << *a << '\n';
}

int main(){
    
    int b = 10;
    
    cout << b << '\n';
    
    cout << "===========" << '\n';
    
    change1(&b);
    
    cout << "===========" << '\n';
    
    cout << b << '\n';
    
    return 0;
}
