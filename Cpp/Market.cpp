#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Seller.cpp"
using namespace std;

class Market {
private:
    int idMarket;
    string marketName;
    string marketLocation;
    string operatingHours;
    vector<Seller> sellerList;

public:
    // Default constructor
    Market() {
        this->idMarket = 0;
        this->marketName = "";
        this->marketLocation = "";
        this->operatingHours = "";
    }

    // Parameterized constructor
    Market(int idMarket, string name, string location, string hours) {
        this->idMarket = idMarket;
        this->marketName = name;
        this->marketLocation = location;
        this->operatingHours = hours;
    }

    // ===== Getter methods =====
    int getIdMarket() {
        return this->idMarket;
    }

    string getMarketName() {
        return this->marketName;
    }

    string getMarketLocation() {
        return this->marketLocation;
    }

    string getOperatingHours() {
        return this->operatingHours;
    }

    vector<Seller> getSellerList() {
        return this->sellerList;
    }

    // ===== Setter methods =====
    void setMarketName(string name) {
        this->marketName = name;
    }

    void setMarketLocation(string location) {
        this->marketLocation = location;
    }

    void setOperatingHours(string hours) {
        this->operatingHours = hours;
    }

    void setSellerList(vector<Seller> daftar) {
        this->sellerList = daftar;
    }

    // Tambah seller ke daftar
    void addSeller(const Seller& seller) {
        this->sellerList.push_back(seller);
    }

    void displayMarket(int indent){
        string sp(indent, ' ');
        cout << sp << "Market ID   : " << getIdMarket() << endl;
        cout << sp << "Name        : " << getMarketName() << endl;
        cout << sp << "Location    : " << getMarketLocation() << endl;
        cout << sp << "Operating H.: " << getOperatingHours() << endl << endl;

        if(!sellerList.empty()){
            cout << sp << "    Sellers:" << endl;
            for(auto &seller : sellerList){
                seller.displaySeller(indent + 8);
            }
        }
    }

    // Destructor
    ~Market() {
    }
};
