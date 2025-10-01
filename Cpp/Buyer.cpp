#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Person.cpp"
#include"Market.cpp"
using namespace std;

class Buyer : virtual public Person {
private:
    double maxBudget;
    vector<Market> listMarket;

public:
    // Default constructor
    Buyer() : Person() {
        this->maxBudget = 0.0;
    }

    // Parameterized constructor
    Buyer(int id, string name, string address, double budget) 
        : Person(id, name, address) {
        this->maxBudget = budget;
    }

    // ===== Getter methods =====
    double getMaxBudget() {
        return this->maxBudget;
    }

    vector<Market> getListMarket() {
        return this->listMarket;
    }

    // ===== Setter methods =====
    void setMaxBudget(double budget) {
        this->maxBudget = budget;
    }

    void setListMarket(vector<Market> daftar) {
        this->listMarket = daftar;
    }

    // Tambah Market ke daftar
    void addMarket(const Market& market) {
        this->listMarket.push_back(market);
    }

    void displayBuyer(int indent) {
        string sp(indent, ' ');
        cout << sp << "Buyer ID   : " << getIdPerson() << endl;
        cout << sp << "Name       : " << getName() << endl;
        cout << sp << "Address    : " << getAddress() << endl;
        cout << sp << "Max Budget : " << getMaxBudget() << endl << endl;

        if (!listMarket.empty()) {
            cout << sp << "    Markets:" << endl;
            for (auto &m : listMarket) {
                m.displayMarket(indent + 8); // Tampilkan Market beserta Seller/Farmer
            }
        }
        cout << endl;
    }

    // Destructor
    ~Buyer() {
    }
};
