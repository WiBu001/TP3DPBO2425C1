#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Plant.cpp"
using namespace std;

class Land {
private:
    int idLand;
    string landLocation;
    vector<Plant> plantList;

public:
    // Default constructor
    Land() {
        this->idLand = 0;
        this->landLocation = "";
    }

    // Parameterized constructor
    Land(int idLand, string landLocation) {
        this->idLand = idLand;
        this->landLocation = landLocation;
    }

    // Getter methods
    int getIdLand() {
        return this->idLand;
    }

    string getLandLocation() {
        return this->landLocation;
    }

    vector<Plant> getPlantList() {
        return this->plantList;
    }

    // Setter methods
    void setLandLocation(string landLocation) {
        this->landLocation = landLocation;
    }

    void setPlantList(vector<Plant> daftar) {
        this->plantList = daftar;
    }

    // Tambah Plant ke list
    void addPlant(const Plant& plant) {
        this->plantList.push_back(plant);
    }

    void displayLand(int indent){
        string sp(indent, ' ');
        cout << sp << "Land ID       : " << getIdLand() << endl;
        cout << sp << "Land Location : " << getLandLocation() << endl << endl;

        if(!plantList.empty()){
            cout << sp << "    Plant:" << endl;
            for(auto &plant : plantList){
                plant.displayPlant(indent + 8);
            }
        }
    }

    // Destructor
    ~Land() {
    }
};
