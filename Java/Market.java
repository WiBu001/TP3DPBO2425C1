import java.util.ArrayList;
import java.util.List;

public class Market {
    private int idMarket;
    private String marketName;
    private String marketLocation;
    private String operatingHours;
    private List<Seller> sellerList;

    // Default constructor
    public Market() {
        this.idMarket = 0;
        this.marketName = "";
        this.marketLocation = "";
        this.operatingHours = "";
        this.sellerList = new ArrayList<>();
    }

    // Parameterized constructor
    public Market(int idMarket, String name, String location, String hours) {
        this.idMarket = idMarket;
        this.marketName = name;
        this.marketLocation = location;
        this.operatingHours = hours;
        this.sellerList = new ArrayList<>();
    }

    // ===== Getter methods =====
    public int getIdMarket() {
        return this.idMarket;
    }

    public String getMarketName() {
        return this.marketName;
    }

    public String getMarketLocation() {
        return this.marketLocation;
    }

    public String getOperatingHours() {
        return this.operatingHours;
    }

    public List<Seller> getSellerList() {
        return this.sellerList;
    }

    // ===== Setter methods =====
    public void setMarketName(String name) {
        this.marketName = name;
    }

    public void setMarketLocation(String location) {
        this.marketLocation = location;
    }

    public void setOperatingHours(String hours) {
        this.operatingHours = hours;
    }

    public void setSellerList(List<Seller> daftar) {
        this.sellerList = daftar;
    }

    // Tambah seller ke daftar
    public void addSeller(Seller seller) {
        this.sellerList.add(seller);
    }

    // Display method
    public void displayMarket(int indent) {
        String sp = " ".repeat(indent);
        System.out.println(sp + "Market ID   : " + getIdMarket());
        System.out.println(sp + "Name        : " + getMarketName());
        System.out.println(sp + "Location    : " + getMarketLocation());
        System.out.println(sp + "Operating H.: " + getOperatingHours());
        System.out.println();

        if (!sellerList.isEmpty()) {
            System.out.println(sp + "    Sellers:");
            for (Seller seller : sellerList) {
                seller.displaySeller(indent + 8);
            }
        }
    }
}
