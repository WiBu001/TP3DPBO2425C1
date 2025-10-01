#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Person.cpp"
#include"Plant.cpp"
#include"Farmer.cpp"
using namespace std;

class Seller : public Person {
private:
    vector<Plant> plantProductList;
    vector<Farmer> farmerList;

public:
    // Default constructor
    Seller() : Person() {
        this->plantProductList = {};
        this->farmerList = {};
    }

    // Parameterized constructor
    Seller(int idPerson, string name, string address)
        : Person(idPerson, name, address) {
        this->plantProductList = {};
        this->farmerList = {};
    }

    // ===== Getter methods =====
    vector<Plant> getPlantProductList() {
        return this->plantProductList;
    }

    vector<Farmer> getFarmerList() {
        return this->farmerList;
    }

    // ===== Setter methods =====
    void setPlantProductList(vector<Plant> daftar) {
        this->plantProductList = daftar;
    }

    void setFarmerList(vector<Farmer> daftar) {
        this->farmerList = daftar;
    }

    // Tambah Plant ke daftar produk
    void addPlantProduct(const Plant& plant) {
        this->plantProductList.push_back(plant);
    }

    // Tambah Farmer ke daftar mitra
    void addFarmer(const Farmer& farmer) {
        this->farmerList.push_back(farmer);
    }

    void displaySeller(int indent){
        string sp(indent, ' ');
        cout << sp << "Seller ID: " << getIdPerson() << endl;
        cout << sp << "Name     : " << getName() << endl;
        cout << sp << "Address  : " << getAddress() << endl << endl;

        if(!plantProductList.empty()){
            cout << sp << "    Products:" << endl;
            for(auto &plant : plantProductList){
                plant.displayPlant(indent + 8);
            }
        }

        if(!farmerList.empty()){
            cout << sp << "    Farmers:" << endl;
            for(auto &farmer : farmerList){
                farmer.displayFarmer(indent + 8);
            }
        }
    }

    // Destructor
    ~Seller() {
    }
};
