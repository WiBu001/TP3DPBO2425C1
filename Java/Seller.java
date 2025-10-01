import java.util.ArrayList;
import java.util.List;

public class Seller extends Person {
    private List<Plant> plantProductList;
    private List<Farmer> farmerList;

    // Default constructor
    public Seller() {
        super();
        this.plantProductList = new ArrayList<>();
        this.farmerList = new ArrayList<>();
    }

    // Parameterized constructor
    public Seller(int idPerson, String name, String address) {
        super(idPerson, name, address);
        this.plantProductList = new ArrayList<>();
        this.farmerList = new ArrayList<>();
    }

    // ===== Getter methods =====
    public List<Plant> getPlantProductList() {
        return this.plantProductList;
    }

    public List<Farmer> getFarmerList() {
        return this.farmerList;
    }

    // ===== Setter methods =====
    public void setPlantProductList(List<Plant> daftar) {
        this.plantProductList = daftar;
    }

    public void setFarmerList(List<Farmer> daftar) {
        this.farmerList = daftar;
    }

    // Tambah Plant ke daftar produk
    public void addPlantProduct(Plant plant) {
        this.plantProductList.add(plant);
    }

    // Tambah Farmer ke daftar mitra
    public void addFarmer(Farmer farmer) {
        this.farmerList.add(farmer);
    }

    // Display
    public void displaySeller(int indent) {
        String sp = " ".repeat(indent);
        System.out.println(sp + "Seller ID: " + getIdPerson());
        System.out.println(sp + "Name     : " + getName());
        System.out.println(sp + "Address  : " + getAddress());
        System.out.println();

        if (!plantProductList.isEmpty()) {
            System.out.println(sp + "    Products:");
            for (Plant plant : plantProductList) {
                plant.displayPlant(indent + 8);
            }
        }

        if (!farmerList.isEmpty()) {
            System.out.println(sp + "    Farmers:");
            for (Farmer farmer : farmerList) {
                farmer.displayFarmer(indent + 8);
            }
        }
    }
}
