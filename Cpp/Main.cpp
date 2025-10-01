#include <iostream>
#include <vector>
#include "Farmer.cpp"
#include "FarmingTool.cpp"
#include "Land.cpp"
#include "Plant.cpp"
#include "Seller.cpp"
#include "Market.cpp"
#include "Buyer.cpp"
#include "Police.cpp"
#include "PoliceStation.cpp"
#include "Undercover.cpp"
#include "BlackMarket.cpp"
#include "LegalMarket.cpp"

using namespace std;

int main() {
    // ===== Dummy Farmers =====
    Farmer farmer1(101, "John Doe", "Village A");
    farmer1.addFarmingTool(FarmingTool(1, "Hoe"));
    Land land1(1, "North Field");
    land1.addPlant(Plant(1, "Rice", 1000, "Legal"));
    farmer1.addLand(land1);

    Farmer farmer2(102, "Jane Smith", "Village B");
    farmer2.addFarmingTool(FarmingTool(2, "Sickle"));
    Land land2(2, "South Field");
    land2.addPlant(Plant(2, "Corn", 800, "Legal"));
    farmer2.addLand(land2);

    vector<Farmer> farmers = {farmer1, farmer2};

    // ===== Dummy Sellers =====
    Seller seller1(201, "Alice", "City X");
    seller1.addFarmer(farmer1);
    seller1.addFarmer(farmer2);
    seller1.addPlantProduct(Plant(1, "Rice", 1000, "Legal"));

    vector<Seller> sellers = {seller1};

    // ===== Dummy Market =====
    Market market1(301, "Central Market", "City X", "08:00-18:00");
    market1.addSeller(seller1);

    vector<Market> markets = {market1};

    // ===== Dummy BlackMarket =====
    BlackMarket blackMarket1(401, "Secret Market", "Underground Cave", "24/7", "SC123", "Hidden Location XYZ");
    blackMarket1.addSeller(seller1);

    vector<BlackMarket> blackMarkets = {blackMarket1};

    // ===== Dummy LegalMarket =====
    LegalMarket legalMarket1(501, "Official Market", "City Y", "09:00-17:00", "LIC789", 10.5);
    legalMarket1.addSeller(seller1);

    vector<LegalMarket> legalMarkets = {legalMarket1};

    // ===== Dummy Buyer =====
    Buyer buyer1(601, "Bob", "City Y", 5000);
    buyer1.addMarket(market1);

    vector<Buyer> buyers = {buyer1};

    // ===== Dummy Police =====
    Police officer1(701, "Officer Mike", "City Z", "B123", "Sergeant");
    Police officer2(702, "Officer Anna", "City Z", "B124", "Lieutenant");

    PoliceStation station1(801, "Central Police Station", "City Z");
    station1.addPolice(officer1);
    station1.addPolice(officer2);

    vector<PoliceStation> stations = {station1};

    // ===== Dummy Undercover =====
    Undercover undercover1(901, "Charlie", "City Q", 2000,
                           902, "Agent Dave", "City Q", "B200", "Detective",
                           "Charlie Cover");
    undercover1.addTarget(farmer1);

    vector<Undercover> undercovers = {undercover1};

    cout << "===== BLACK MARKET =====" << endl;
    blackMarket1.displayBlackMarket(0);
    cout << "===== LEGAL MARKET =====" << endl;
    legalMarket1.displayLegalMarket(0);
    cout << "===== BUYER =====" << endl;
    buyer1.displayBuyer(0);
    cout << "===== UNDERCOVER =====" << endl;
    undercover1.displayUndercover(0);
    cout << "===== POLICE STATION =====" << endl;
    station1.displayPoliceStation(0);

        cout << "\n===== PENAMBAHAN DATA =====" << endl;

    // Tambah Farmer baru
    Farmer farmer3(103, "David Miller", "Village C");
    farmer3.addFarmingTool(FarmingTool(3, "Tractor"));
    Land land3(3, "West Field");
    land3.addPlant(Plant(3, "Wheat", 1200, "Legal"));
    farmer3.addLand(land3);

    Farmer farmer4(104, "Emily Davis", "Village D");
    farmer4.addFarmingTool(FarmingTool(4, "Plow"));
    Land land4(4, "East Field");
    land4.addPlant(Plant(4, "Opium", 500, "Illegal"));
    farmer4.addLand(land4);

    farmers.push_back(farmer3);
    farmers.push_back(farmer4);

    // Tambah Seller baru
    Seller seller2(202, "Mark", "City Y");
    seller2.addFarmer(farmer3);
    seller2.addFarmer(farmer4);
    seller2.addPlantProduct(Plant(3, "Wheat", 1200, "Legal"));
    seller2.addPlantProduct(Plant(4, "Opium", 500, "Illegal"));
    sellers.push_back(seller2);

    // Tambah Market baru
    Market market2(302, "East Market", "City Y", "07:00-15:00");
    market2.addSeller(seller2);
    markets.push_back(market2);

    // Tambah BlackMarket baru
    BlackMarket blackMarket2(402, "Dark Alley Market", "Backstreet Z", "22:00-04:00", "SC456", "Secret Tunnel");
    blackMarket2.addSeller(seller2);
    blackMarkets.push_back(blackMarket2);

    // Tambah LegalMarket baru
    LegalMarket legalMarket2(502, "Regional Market", "City Z", "08:30-16:30", "LIC456", 5.0);
    legalMarket2.addSeller(seller2);
    legalMarkets.push_back(legalMarket2);

    // Tambah Buyer baru
    Buyer buyer2(602, "Alice Johnson", "City Z", 7000);
    buyer2.addMarket(market2);
    buyers.push_back(buyer2);

    // Tambah Police baru
    Police officer3(703, "Officer John", "City Q", "B125", "Captain");
    Police officer4(704, "Officer Sarah", "City Q", "B126", "Inspector");

    PoliceStation station2(802, "East Police Station", "City Q");
    station2.addPolice(officer3);
    station2.addPolice(officer4);
    stations.push_back(station2);

    // Tambah Undercover baru
    Undercover undercover2(903, "Eve", "City Z", 3000,
                           904, "Agent Frank", "City Z", "B201", "Special Agent",
                           "Eve Cover");
    undercover2.addTarget(farmer3);
    undercover2.addTarget(farmer4);
    undercovers.push_back(undercover2);

    // ============================================================
    // Tampilkan semua setelah penambahan
    // ============================================================

    cout << "\n===== LIST BLACK MARKETS =====" << endl;
    for (auto &bm : blackMarkets) bm.displayBlackMarket(0);

    cout << "===== LIST LEGAL MARKETS =====" << endl;
    for (auto &lm : legalMarkets) lm.displayLegalMarket(0);

    cout << "===== LIST BUYERS =====" << endl;
    for (auto &b : buyers) b.displayBuyer(0);

    cout << "===== LIST UNDERCOVERS =====" << endl;
    for (auto &uc : undercovers) uc.displayUndercover(0);

    cout << "===== LIST POLICE STATIONS =====" << endl;
    for (auto &ps : stations) ps.displayPoliceStation(0);

    return 0;
}
