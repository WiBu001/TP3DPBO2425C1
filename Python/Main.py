from Farmer import Farmer
from FarmingTool import FarmingTool
from Land import Land
from Plant import Plant
from Seller import Seller
from Market import Market
from Buyer import Buyer
from Police import Police
from PoliceStation import PoliceStation
from Undercover import Undercover
from BlackMarket import BlackMarket
from LegalMarket import LegalMarket


def main():
    # ===== Dummy Farmers =====
    farmer1 = Farmer(101, "John Doe", "Village A")
    farmer1.add_farming_tool(FarmingTool(1, "Hoe"))
    land1 = Land(1, "North Field")
    land1.add_plant(Plant(1, "Rice", 1000, "Legal"))
    farmer1.add_land(land1)

    farmer2 = Farmer(102, "Jane Smith", "Village B")
    farmer2.add_farming_tool(FarmingTool(2, "Sickle"))
    land2 = Land(2, "South Field")
    land2.add_plant(Plant(2, "Corn", 800, "Legal"))
    farmer2.add_land(land2)

    farmers = [farmer1, farmer2]

    # ===== Dummy Sellers =====
    seller1 = Seller(201, "Alice", "City X")
    seller1.add_farmer(farmer1)
    seller1.add_farmer(farmer2)
    seller1.add_plant_product(Plant(1, "Rice", 1000, "Legal"))

    sellers = [seller1]

    # ===== Dummy Market =====
    market1 = Market(301, "Central Market", "City X", "08:00-18:00")
    market1.add_seller(seller1)

    markets = [market1]

    # ===== Dummy BlackMarket =====
    black_market1 = BlackMarket(401, "Secret Market", "Underground Cave", "24/7",
                                "SC123", "Hidden Location XYZ")
    black_market1.add_seller(seller1)

    black_markets = [black_market1]

    # ===== Dummy LegalMarket =====
    legal_market1 = LegalMarket(501, "Official Market", "City Y", "09:00-17:00",
                                "LIC789", 10.5)
    legal_market1.add_seller(seller1)

    legal_markets = [legal_market1]

    # ===== Dummy Buyer =====
    buyer1 = Buyer(601, "Bob", "City Y", 5000)
    buyer1.add_market(market1)

    buyers = [buyer1]

    # ===== Dummy Police =====
    officer1 = Police(701, "Officer Mike", "City Z", "B123", "Sergeant")
    officer2 = Police(702, "Officer Anna", "City Z", "B124", "Lieutenant")

    station1 = PoliceStation(801, "Central Police Station", "City Z")
    station1.add_police(officer1)
    station1.add_police(officer2)

    stations = [station1]

    # ===== Dummy Undercover =====
    undercover1 = Undercover(901, "Charlie", "City Q", 2000,
                             902, "Agent Dave", "City Q", "B200", "Detective",
                             "Charlie Cover")
    undercover1.add_Target(farmer1)

    undercovers = [undercover1]

    print("===== BLACK MARKET =====")
    black_market1.display_black_market(0)
    print("===== LEGAL MARKET =====")
    legal_market1.display_legal_market(0)
    print("===== BUYER =====")
    buyer1.display_buyer(0)
    print("===== UNDERCOVER =====")
    undercover1.display_undercover(0)
    print("===== POLICE STATION =====")
    station1.display_police_station(0)

    print("\n===== PENAMBAHAN DATA =====")

    # Tambah Farmer baru
    farmer3 = Farmer(103, "David Miller", "Village C")
    farmer3.add_farming_tool(FarmingTool(3, "Tractor"))
    land3 = Land(3, "West Field")
    land3.add_plant(Plant(3, "Wheat", 1200, "Legal"))
    farmer3.add_land(land3)

    farmer4 = Farmer(104, "Emily Davis", "Village D")
    farmer4.add_farming_tool(FarmingTool(4, "Plow"))
    land4 = Land(4, "East Field")
    land4.add_plant(Plant(4, "Opium", 500, "Illegal"))
    farmer4.add_land(land4)

    farmers.extend([farmer3, farmer4])

    # Tambah Seller baru
    seller2 = Seller(202, "Mark", "City Y")
    seller2.add_farmer(farmer3)
    seller2.add_farmer(farmer4)
    seller2.add_plant_product(Plant(3, "Wheat", 1200, "Legal"))
    seller2.add_plant_product(Plant(4, "Opium", 500, "Illegal"))
    sellers.append(seller2)

    # Tambah Market baru
    market2 = Market(302, "East Market", "City Y", "07:00-15:00")
    market2.add_seller(seller2)
    markets.append(market2)

    # Tambah BlackMarket baru
    black_market2 = BlackMarket(402, "Dark Alley Market", "Backstreet Z",
                                "22:00-04:00", "SC456", "Secret Tunnel")
    black_market2.add_seller(seller2)
    black_markets.append(black_market2)

    # Tambah LegalMarket baru
    legal_market2 = LegalMarket(502, "Regional Market", "City Z", "08:30-16:30",
                                "LIC456", 5.0)
    legal_market2.add_seller(seller2)
    legal_markets.append(legal_market2)

    # Tambah Buyer baru
    buyer2 = Buyer(602, "Alice Johnson", "City Z", 7000)
    buyer2.add_market(market2)
    buyers.append(buyer2)

    # Tambah Police baru
    officer3 = Police(703, "Officer John", "City Q", "B125", "Captain")
    officer4 = Police(704, "Officer Sarah", "City Q", "B126", "Inspector")

    station2 = PoliceStation(802, "East Police Station", "City Q")
    station2.add_police(officer3)
    station2.add_police(officer4)
    stations.append(station2)

    # Tambah Undercover baru
    undercover2 = Undercover(903, "Eve", "City Z", 3000,
                             904, "Agent Frank", "City Z", "B201", "Special Agent",
                             "Eve Cover")
    undercover2.add_Target(farmer3)
    undercover2.add_Target(farmer4)
    undercovers.append(undercover2)

    # ============================================================
    # Tampilkan semua setelah penambahan
    # ============================================================
    print("\n===== LIST BLACK MARKETS =====")
    for bm in black_markets:
        bm.display_black_market(0)

    print("===== LIST LEGAL MARKETS =====")
    for lm in legal_markets:
        lm.display_legal_market(0)

    print("===== LIST BUYERS =====")
    for b in buyers:
        b.display_buyer(0)

    print("===== LIST UNDERCOVERS =====")
    for uc in undercovers:
        uc.display_undercover(0)

    print("===== LIST POLICE STATIONS =====")
    for ps in stations:
        ps.display_police_station(0)


if __name__ == "__main__":
    main()
