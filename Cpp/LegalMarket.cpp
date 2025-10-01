#include <iostream>
#include <string>
#include <vector>
#include "Market.cpp"

using namespace std;

class LegalMarket : public Market {
private:
    string LicenseNumber;
    double TaxRate;

public:
    // Default constructor
    LegalMarket() : Market() {
        LicenseNumber = "";
        TaxRate = 0.0;
    }

    // Parameterized constructor
    LegalMarket(int idMarket, string name, string location, string hours,
                string licenseNumber, double taxRate)
        : Market(idMarket, name, location, hours) {
        this->LicenseNumber = licenseNumber;
        this->TaxRate = taxRate;
    }

    // Getter methods
    string getLicenseNumber() {
        return this->LicenseNumber;
    }

    double getTaxRate() {
        return this->TaxRate;
    }

    // Setter methods
    void setLicenseNumber(string licenseNumber) {
        this->LicenseNumber = licenseNumber;
    }

    void setTaxRate(double taxRate) {
        this->TaxRate = taxRate;
    }

    void displayLegalMarket(int indent){
        string sp(indent, ' ');
        cout << sp << "License Number : " << getLicenseNumber() << endl;
        cout << sp << "Tax Rate       : " << getTaxRate() << "%" << endl;
        
        // Display Market attributes
        cout << sp << "Market ID      : " << getIdMarket() << endl;
        cout << sp << "Name           : " << getMarketName() << endl;
        cout << sp << "Location       : " << getMarketLocation() << endl;
        cout << sp << "Operating H.   : " << getOperatingHours() << endl << endl;

        // Display Sellers
        if(!getSellerList().empty()){
            cout << sp << "    Sellers:" << endl;
            for(auto &seller : getSellerList()){
                seller.displaySeller(indent + 8);
            }
        }
    }

    // Destructor
    ~LegalMarket() {
    }
};
