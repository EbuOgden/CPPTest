//
//  ConstructorInheritance.cpp
//  
//
//  Created by Ebubekir on 11/15/16.
//
//

#include <stdio.h>
#include <iostream>

using namespace std;

class Machine{
    
    public:
        Machine(): id(0){ cout << "Machine Non-parameter Constructor called! " << '\n'; };
        Machine(int id): id(id){ cout << "Machine Parameterized Constructor Called!" << '\n'; };
        void getInfo() { cout << " Id is : " << getId() << '\n'; };
        void setInfo(int a) { setId(a); };
    
    private:
        int id;
    
    private: // Encapsulation!
        int getId(){
            return id;
        };
    
        void setId(int newId){
            this->id = newId;
        };
    
};

class Vehicle: public Machine{
    public:
        Vehicle(){ cout << "Vehicle Non-parameter constructor called! " << '\n'; };
        Vehicle(int id) : Machine(id) { cout<< "Vehicle Parameterized Constructor Called! " << '\n'; }; // You can select it which constructor you call from the super class!
};

class Car: public Vehicle{
    public:
        Car(){ cout << "Car Non-parameter constructor called! " << '\n'; };
        Car(int id): Vehicle(id) { cout << "Car Parameterized Constructor Called! " << '\n'; };
};

int main(){
    Vehicle vehicle(125);
    vehicle.getInfo();
    
    return 0;
}
