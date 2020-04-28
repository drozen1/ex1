//
// Created by Dor on 28/04/2020.
//


#include <iostream>
#include "main2.h"
using namespace std;



class person{
public:
    person(int age) : age(age) {}

    friend ostream &operator<<(ostream &os, const person &person) {
        os << "age: " << person.age;
        return os;
    }

    int getAge() const {
        return age;
    }

    void setAge(int age) {
        person::age = age;
    }

    bool operator==(const person &rhs) const {
        return age == rhs.age;
    }

    void print() {
        int zsz;

    }

private:
    int age;
};

int main(int argc, const char**argv) {
    int x=32;
    person dor= person(x);
    person leon= person(32);
    if(leon==dor){
        std::cout<<dor<<endl;
    }
    dor.print();
    return 1;
}