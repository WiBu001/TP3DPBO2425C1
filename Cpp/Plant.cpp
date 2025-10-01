#pragma once
#include <iostream>
#include <string>
using namespace std;

class Plant {
private:
    int idPlant;
    string PlantName;
    double Price;
    string PlantType; // Legal / Illegal

public:
    // Default constructor
    Plant() {
        idPlant = 0;
        PlantName = "";
        Price = 0.0;
        PlantType = "Legal";
    }

    // Constructor dengan parameter
    Plant(int idPlant, string PlantName, double Price, string PlantType) {
        this->idPlant = idPlant;
        this->PlantName = PlantName;
        this->Price = Price;
        this->PlantType = PlantType;
    }

    // Setter

    void setPlantName(string PlantName) {
        this->PlantName = PlantName;
    }

    void setPrice(double Price) {
        this->Price = Price;
    }

    void setPlantType(string PlantType) {
        this->PlantType = PlantType;
    }

    // Getter
    int getIdPlant() {
        return this->idPlant;
    }

    string getPlantName() {
        return this->PlantName;
    }

    double getPrice() {
        return this->Price;
    }

    string getPlantType() {
        return this->PlantType;
    }

    void displayPlant(int indent){
        string sp(indent, ' ');
        cout << sp << "Plant ID    : " << getIdPlant() << endl;
        cout << sp << "Plant Name  : " << getPlantName() << endl;
        cout << sp << "Plant Price : " << getPrice() << endl;
        cout << sp << "Plant Type  : " << getPlantType() << endl << endl;
    }

    ~Plant() {}
};