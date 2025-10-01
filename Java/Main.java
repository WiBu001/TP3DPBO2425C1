import java.util.*;

public class Main {
    public static void main(String[] args) {
        // ===== Dummy Farmers =====
        Farmer farmer1 = new Farmer(101, "John Doe", "Village A");
        farmer1.addFarmingTool(new FarmingTool(1, "Hoe"));
        Land land1 = new Land(1, "North Field");
        land1.addPlant(new Plant(1, "Rice", 1000, "Legal"));
        farmer1.addLand(land1);

        Farmer farmer2 = new Farmer(102, "Jane Smith", "Village B");
        farmer2.addFarmingTool(new FarmingTool(2, "Sickle"));
        Land land2 = new Land(2, "South Field");
        land2.addPlant(new Plant(2, "Corn", 800, "Legal"));
        farmer2.addLand(land2);

        List<Farmer> farmers = new ArrayList<>(Arrays.asList(farmer1, farmer2));

        // ===== Dummy Sellers =====
        Seller seller1 = new Seller(201, "Alice", "City X");
        seller1.addFarmer(farmer1);
        seller1.addFarmer(farmer2);
        seller1.addPlantProduct(new Plant(1, "Rice", 1000, "Legal"));

        List<Seller> sellers = new ArrayList<>(Arrays.asList(seller1));

        // ===== Dummy Market =====
        Market market1 = new Market(301, "Central Market", "City X", "08:00-18:00");
        market1.addSeller(seller1);

        List<Market> markets = new ArrayList<>(Arrays.asList(market1));

        // ===== Dummy BlackMarket =====
        BlackMarket blackMarket1 = new BlackMarket(401, "Secret Market", "Underground Cave",
                                                   "24/7", "SC123", "Hidden Location XYZ");
        blackMarket1.addSeller(seller1);

        List<BlackMarket> blackMarkets = new ArrayList<>(Arrays.asList(blackMarket1));

        // ===== Dummy LegalMarket =====
        LegalMarket legalMarket1 = new LegalMarket(501, "Official Market", "City Y", "09:00-17:00",
                                                   "LIC789", 10.5);
        legalMarket1.addSeller(seller1);

        List<LegalMarket> legalMarkets = new ArrayList<>(Arrays.asList(legalMarket1));

        // ===== Dummy Buyer =====
        Buyer buyer1 = new Buyer(601, "Bob", "City Y", 5000);
        buyer1.addMarket(market1);

        List<Buyer> buyers = new ArrayList<>(Arrays.asList(buyer1));

        // ===== Dummy Police =====
        Police officer1 = new Police(701, "Officer Mike", "City Z", "B123", "Sergeant");
        Police officer2 = new Police(702, "Officer Anna", "City Z", "B124", "Lieutenant");

        PoliceStation station1 = new PoliceStation(801, "Central Police Station", "City Z");
        station1.addPolice(officer1);
        station1.addPolice(officer2);

        List<PoliceStation> stations = new ArrayList<>(Arrays.asList(station1));

        // ===== Dummy Undercover =====
        Undercover undercover1 = new Undercover(
            901, "Charlie", "City Q", 2000,
            902, "Agent Dave", "City Q", "B200", "Detective",
            "Charlie Cover"
        );
        undercover1.addTarget(farmer1);

        List<Undercover> undercovers = new ArrayList<>(Arrays.asList(undercover1));

        System.out.println("===== BLACK MARKET =====");
        blackMarket1.displayBlackMarket(0);
        System.out.println("===== LEGAL MARKET =====");
        legalMarket1.displayLegalMarket(0);
        System.out.println("===== BUYER =====");
        buyer1.displayBuyer(0);
        System.out.println("===== UNDERCOVER =====");
        undercover1.displayUndercover(0);
        System.out.println("===== POLICE STATION =====");
        station1.displayPoliceStation(0);

        System.out.println("\n===== PENAMBAHAN DATA =====");

        // Tambah Farmer baru
        Farmer farmer3 = new Farmer(103, "David Miller", "Village C");
        farmer3.addFarmingTool(new FarmingTool(3, "Tractor"));
        Land land3 = new Land(3, "West Field");
        land3.addPlant(new Plant(3, "Wheat", 1200, "Legal"));
        farmer3.addLand(land3);

        Farmer farmer4 = new Farmer(104, "Emily Davis", "Village D");
        farmer4.addFarmingTool(new FarmingTool(4, "Plow"));
        Land land4 = new Land(4, "East Field");
        land4.addPlant(new Plant(4, "Opium", 500, "Illegal"));
        farmer4.addLand(land4);

        farmers.add(farmer3);
        farmers.add(farmer4);

        // Tambah Seller baru
        Seller seller2 = new Seller(202, "Mark", "City Y");
        seller2.addFarmer(farmer3);
        seller2.addFarmer(farmer4);
        seller2.addPlantProduct(new Plant(3, "Wheat", 1200, "Legal"));
        seller2.addPlantProduct(new Plant(4, "Opium", 500, "Illegal"));
        sellers.add(seller2);

        // Tambah Market baru
        Market market2 = new Market(302, "East Market", "City Y", "07:00-15:00");
        market2.addSeller(seller2);
        markets.add(market2);

        // Tambah BlackMarket baru
        BlackMarket blackMarket2 = new BlackMarket(402, "Dark Alley Market", "Backstreet Z",
                                                   "22:00-04:00", "SC456", "Secret Tunnel");
        blackMarket2.addSeller(seller2);
        blackMarkets.add(blackMarket2);

        // Tambah LegalMarket baru
        LegalMarket legalMarket2 = new LegalMarket(502, "Regional Market", "City Z", "08:30-16:30",
                                                   "LIC456", 5.0);
        legalMarket2.addSeller(seller2);
        legalMarkets.add(legalMarket2);

        // Tambah Buyer baru
        Buyer buyer2 = new Buyer(602, "Alice Johnson", "City Z", 7000);
        buyer2.addMarket(market2);
        buyers.add(buyer2);

        // Tambah Police baru
        Police officer3 = new Police(703, "Officer John", "City Q", "B125", "Captain");
        Police officer4 = new Police(704, "Officer Sarah", "City Q", "B126", "Inspector");

        PoliceStation station2 = new PoliceStation(802, "East Police Station", "City Q");
        station2.addPolice(officer3);
        station2.addPolice(officer4);
        stations.add(station2);

        // Tambah Undercover baru
        Undercover undercover2 = new Undercover(
            903, "Eve", "City Z", 3000,
            904, "Agent Frank", "City Z", "B201", "Special Agent",
            "Eve Cover"
        );
        undercover2.addTarget(farmer3);
        undercover2.addTarget(farmer4);
        undercovers.add(undercover2);

        // ============================================================
        // Tampilkan semua setelah penambahan
        // ============================================================

        System.out.println("\n===== LIST BLACK MARKETS =====");
        for (BlackMarket bm : blackMarkets) {
            bm.displayBlackMarket(0);
        }

        System.out.println("===== LIST LEGAL MARKETS =====");
        for (LegalMarket lm : legalMarkets) {
            lm.displayLegalMarket(0);
        }

        System.out.println("===== LIST BUYERS =====");
        for (Buyer b : buyers) {
            b.displayBuyer(0);
        }

        System.out.println("===== LIST UNDERCOVERS =====");
        for (Undercover uc : undercovers) {
            uc.displayUndercover(0);
        }

        System.out.println("===== LIST POLICE STATIONS =====");
        for (PoliceStation ps : stations) {
            ps.displayPoliceStation(0);
        }
    }
}
