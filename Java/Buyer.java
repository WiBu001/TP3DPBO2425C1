import java.util.ArrayList;
import java.util.List;

public class Buyer extends Person {
    private double maxBudget;
    private List<Market> listMarket;

    // Default constructor
    public Buyer() {
        super(); // panggil constructor Person()
        this.maxBudget = 0.0;
        this.listMarket = new ArrayList<>();
    }

    // Parameterized constructor
    public Buyer(int id, String name, String address, double budget) {
        super(id, name, address); // panggil constructor Person dengan parameter
        this.maxBudget = budget;
        this.listMarket = new ArrayList<>();
    }

    // ===== Getter methods =====
    public double getMaxBudget() {
        return maxBudget;
    }

    public List<Market> getListMarket() {
        return listMarket;
    }

    // ===== Setter methods =====
    public void setMaxBudget(double budget) {
        this.maxBudget = budget;
    }

    public void setListMarket(List<Market> daftar) {
        this.listMarket = daftar;
    }

    // Tambah Market ke daftar
    public void addMarket(Market market) {
        this.listMarket.add(market);
    }

    // Display Buyer detail
    public void displayBuyer(int indent) {
        String sp = " ".repeat(indent);
        System.out.println(sp + "Buyer ID   : " + getIdPerson());
        System.out.println(sp + "Name       : " + getName());
        System.out.println(sp + "Address    : " + getAddress());
        System.out.println(sp + "Max Budget : " + getMaxBudget());
        System.out.println();

        if (!listMarket.isEmpty()) {
            System.out.println(sp + "    Markets:");
            for (Market m : listMarket) {
                m.displayMarket(indent + 8); // tampilkan Market beserta Seller/Farmer
            }
        }
        System.out.println();
    }
}
