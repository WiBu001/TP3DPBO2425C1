#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Person.cpp"
#include"FarmingTool.cpp"
#include"Land.cpp"
using namespace std;

class Farmer : public Person {
private:
    vector<FarmingTool> farmingToolList;
    vector<Land> landList;

public:
    // Default constructor
    Farmer() : Person() {
        this->farmingToolList = {};
        this->landList = {};
    }

    // Parameterized constructor
    Farmer(int idPerson, string name, string address)
        : Person(idPerson, name, address) {
        this->farmingToolList = {};
        this->landList = {};
    }

    // Getter methods
    vector<FarmingTool> getFarmingToolList() {
        return this->farmingToolList;
    }

    vector<Land> getLandList() {
        return this->landList;
    }

    // Setter methods
    void setFarmingToolList(vector<FarmingTool> daftar) {
        this->farmingToolList = daftar;
    }

    void setLandList(vector<Land> daftar) {
        this->landList = daftar;
    }

    // Tambah FarmingTool
    void addFarmingTool(const FarmingTool& tool) {
        this->farmingToolList.push_back(tool);
    }

    // Tambah Land
    void addLand(const Land& land) {
        this->landList.push_back(land);
    }

    void displayFarmer(int indent){
        string sp(indent, ' ');

        cout << sp << "Farmer ID: " << getIdPerson() << endl;
        cout << sp << "Name     : " << getName() << endl;
        cout << sp << "Address  : " << getAddress() << endl << endl;

        cout << sp << "    Tools:" << endl;
        for(auto &tool : farmingToolList){
            tool.displayTools(indent + 8);
        }

        cout << sp << "    Lands:" << endl;
        for(auto &land : landList){
            land.displayLand(indent + 8);
        }
    }

    // Destructor
    ~Farmer() {
    }
};
