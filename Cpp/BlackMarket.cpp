#include <iostream>
#include <string>
#include <vector>
#include "Market.cpp"

using namespace std;

class BlackMarket : public Market {
private:
    string SecretCode;
    string HiddenLocation;

public:
    // Default constructor
    BlackMarket() : Market() {
        SecretCode = "";
        HiddenLocation = "";
    }

    // Parameterized constructor
    BlackMarket(int idMarket, string name, string location, string hours,
                string secretCode, string hiddenLocation)
        : Market(idMarket, name, location, hours) {
        this->SecretCode = secretCode;
        this->HiddenLocation = hiddenLocation;
    }

    // Getter methods
    string getSecretCode() {
        return this->SecretCode;
    }

    string getHiddenLocation() {
        return this->HiddenLocation;
    }

    // Setter methods
    void setSecretCode(string code) {
        this->SecretCode = code;
    }

    void setHiddenLocation(string location) {
        this->HiddenLocation = location;
    }

    // Display all info hierarchically
    void displayBlackMarket(int indent = 0) {
        string sp(indent, ' ');
        cout << sp << "Secret Code     : " << getSecretCode() << endl;
        cout << sp << "Hidden Location : " << getHiddenLocation() << endl;

        // Display Market attributes
        cout << sp << "Market ID       : " << getIdMarket() << endl;
        cout << sp << "Name            : " << getMarketName() << endl;
        cout << sp << "Location        : " << getMarketLocation() << endl;
        cout << sp << "Operating Hours : " << getOperatingHours() << endl << endl;

        // Display Sellers and their products
        if(!getSellerList().empty()){
            cout << sp << "    Sellers:" << endl;
            for(auto &seller : getSellerList()){
                seller.displaySeller(indent + 8);
            }
        }
        cout << endl;
    }

    // Destructor
    ~BlackMarket() {
    }
};
