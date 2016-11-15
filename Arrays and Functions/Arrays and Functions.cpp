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

void printArray_1(const int count, string a[2]){
    
    // cout << sizeof(a) << '\n'; RETURNING SIZE OF POINTER!
    
    for(short int i = 0; i < count; i++){
        cout << a[i] << '\n';
    }
}

void printArray_2(const int count, string *a){
    
    // cout << sizeof(a) << '\n'; RETURNING SIZE OF POINTER!
    
    for(short int i = 0; i < count; i++){
        cout << a[i] << '\n';
    }
}

void printArray_3(string (&a)[2]){
    
    cout << sizeof(a)/sizeof(string) << '\n';
    
//    for(short int i = 0; i <)
    
};

char *getMemory(short int a){
    // string names[] = {"Lennon", "Ralph", "Per"}; LOCAL VARIABLE DON'T DO IT!
    
    char *newMem = new char[a];
    
    return newMem;
}

int main(){
    
    string names[] = {"Mike", "Bob", "John"};
    
    printArray_1(3, names);
    
    char *pMem = getMemory(5);
    
    cout << sizeof(pMem) << '\n';
    
    delete [] pMem;
    
    return 0;
}
