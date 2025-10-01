#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Buyer.cpp"
#include"Police.cpp"
#include"Farmer.cpp"
using namespace std;

class Undercover : public Buyer, public Police {
private:
    string coverIdentity;
    vector<Farmer> targetList;

public:
    // Default constructor
    Undercover() : Buyer(), Police() {
        this->coverIdentity = "";
    }

    // Parameterized constructor
    Undercover(int idBuyer, string buyerName, string buyerAddress, double budget,
               int idPolice, string policeName, string policeAddress, string badgeNumber, string rank,
               string cover)
        : Buyer(idBuyer, buyerName,buyerAddress, budget),
          Police(idPolice, policeName, policeAddress, badgeNumber, rank) {
        this->coverIdentity = cover;
    }

    // ===== Getter methods =====
    string getCoverIdentity() {
        return this->coverIdentity;
    }

    vector<Farmer> getTargetList() {
        return this->targetList;
    }

    // ===== Setter methods =====
    void setCoverIdentity(string cover) {
        this->coverIdentity = cover;
    }

    void setTargetList(vector<Farmer> daftar) {
        this->targetList = daftar;
    }

    // Tambah target (Farmer)
    void addTarget(const Farmer& farmer) {
        this->targetList.push_back(farmer);
    }

    void displayUndercover(int indent) {
        string sp(indent, ' ');
        cout << sp << "Undercover ID       : " << getIdPerson() << endl;
        cout << sp << "Real Name           : " << getName() << endl;
        cout << sp << "Real Address        : " << getAddress() << endl;
        cout << sp << "Budget              : " << getMaxBudget() << endl; // dari Buyer
        cout << sp << "Badge Number        : " << getBadgeNumber() << endl; // dari Police
        cout << sp << "Rank                : " << getRank() << endl;        // dari Police
        cout << sp << "Cover Identity      : " << getCoverIdentity() << endl << endl;

        if (!targetList.empty()) {
            cout << sp << "    Target Farmers:" << endl;
            for (auto &f : targetList) {
                f.displayFarmer(indent + 8); // Tampilkan detail Farmer
            }
        }
        cout << endl;
    }

    // Destructor
    ~Undercover() {
    }
};
