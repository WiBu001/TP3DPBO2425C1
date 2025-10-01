#pragma once
#include<iostream>
#include<string>
using namespace std;

class FarmingTool {
private:
    int idTool;
    string farmingToolName;

public:
    // Default constructor
    FarmingTool() {
        this->idTool = 0;
        this->farmingToolName = "";
    }

    // Parameterized constructor
    FarmingTool(int idTool, string farmingToolName) {
        this->idTool = idTool;
        this->farmingToolName = farmingToolName;
    }

    // Getter methods
    int getIdTool() {
        return this->idTool;
    }

    string getFarmingToolName() {
        return this->farmingToolName;
    }

    // Setter methods (tanpa setter untuk idTool)
    void setFarmingToolName(string farmingToolName) {
        this->farmingToolName = farmingToolName;
    }

    void displayTools(int indent){
        string sp(indent, ' ');
        cout << sp << "Tool ID  : " << getIdTool() << endl;
        cout << sp << "Tool Name: " << getFarmingToolName() << endl << endl;
    }

    // Destructor
    ~FarmingTool() {
    }
};
