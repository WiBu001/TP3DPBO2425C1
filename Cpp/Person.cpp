#pragma once
#include<iostream>
#include<string.h>
using namespace std;

class Person {
private:
    int idPerson;
    string Name;
    string Address;

public:
    // Constructor default
    Person() {
        idPerson = 0;
        Name = "";
        Address = "";
    }

    // Constructor dengan parameter
    Person(int idPerson, string Name, string Address) {
        this->idPerson = idPerson;
        this->Name = Name;
        this->Address = Address;
    }

    // Setter
    void setName(string Name) {
        this->Name = Name;
    }

    void setAddress(string Address) {
        this->Address = Address;
    }

    // Getter
    int getIdPerson() {
        return this->idPerson;
    }

    string getName() {
        return this->Name;
    }

    string getAddress() {
        return this->Address;
    }

    ~Person(){
    }
};