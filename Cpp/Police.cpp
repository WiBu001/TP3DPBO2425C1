#pragma once
#include "Person.cpp"

class Police : virtual public Person {
private:
    string BadgeNumber;
    string Rank;

public:
    // Constructor default
    Police() : Person() {
        BadgeNumber = "";
        Rank = "";
    }

    // Constructor dengan parameter (include parent)
    Police(int idPerson, string Name, string Address, string BadgeNumber, string Rank) 
        : Person(idPerson, Name, Address) {
        this->BadgeNumber = BadgeNumber;
        this->Rank = Rank;
    }

    // Setter
    void setBadgeNumber(string BadgeNumber) {
        this->BadgeNumber = BadgeNumber;
    }

    void setRank(string Rank) {
        this->Rank = Rank;
    }

    // Getter
    string getBadgeNumber() {
        return this->BadgeNumber;
    }

    string getRank() {
        return this->Rank;
    }

    void displayPolice(int indent) {
        string sp(indent, ' ');
        cout << sp << "Police ID  : " << getIdPerson() << endl;
        cout << sp << "Name       : " << getName() << endl;
        cout << sp << "Address    : " << getAddress() << endl;
        cout << sp << "Badge No   : " << getBadgeNumber() << endl;
        cout << sp << "Rank       : " << getRank() << endl << endl;
    }

    ~Police() {
    }
};