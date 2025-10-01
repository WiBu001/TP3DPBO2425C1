#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Police.cpp"
using namespace std;

class PoliceStation {
private:
    int idPoliceStation;
    string policeStationName;
    string policeStationAddress;
    vector<Police> listPolice;

public:
    // Default constructor (ID auto-generate)
    PoliceStation() {
        this->idPoliceStation = 0;
        this->policeStationName = "";
        this->policeStationAddress = "";
    }

    // Parameterized constructor (ID auto-generate)
    PoliceStation(int idPoliceStation, string name, string address) {
        this->idPoliceStation = idPoliceStation;
        this->policeStationName = name;
        this->policeStationAddress = address;
    }

    // Getter methods
    int getIdPoliceStation() {
        return this->idPoliceStation;
    }

    string getPoliceStationName() {
        return this->policeStationName;
    }

    string getPoliceStationAddress() {
        return this->policeStationAddress;
    }

    vector<Police> getListPolice() {
        return this->listPolice;
    }

    // Setter methods (id tidak ada setter!)
    void setPoliceStationName(string name) {
        this->policeStationName = name;
    }

    void setPoliceStationAddress(string address) {
        this->policeStationAddress = address;
    }

    void setListPolice(vector<Police> daftar) {
        this->listPolice = daftar;
    }

    // Tambah Police ke list
    void addPolice(const Police& police) {
        this->listPolice.push_back(police);
    }

    void displayPoliceStation(int indent) {
        string sp(indent, ' ');
        cout << sp << "Police Station ID : " << getIdPoliceStation() << endl;
        cout << sp << "Name              : " << getPoliceStationName() << endl;
        cout << sp << "Address           : " << getPoliceStationAddress() << endl << endl;

        if (!listPolice.empty()) {
            cout << sp << "    Police Officers:" << endl;
            for (auto &p : listPolice) {
                p.displayPolice(indent + 8); // Tampilkan detail Police
            }
        }
        cout << endl;
    }

    // Destructor
    ~PoliceStation() {
    }
};
