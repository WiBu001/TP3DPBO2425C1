import java.util.List;

public class BlackMarket extends Market {
    private String secretCode;
    private String hiddenLocation;

    // Default constructor
    public BlackMarket() {
        super(); // panggil constructor default Market
        this.secretCode = "";
        this.hiddenLocation = "";
    }

    // Parameterized constructor
    public BlackMarket(int idMarket, String name, String location, String hours,
                       String secretCode, String hiddenLocation) {
        super(idMarket, name, location, hours); // panggil constructor parent
        this.secretCode = secretCode;
        this.hiddenLocation = hiddenLocation;
    }

    // Getter methods
    public String getSecretCode() {
        return secretCode;
    }

    public String getHiddenLocation() {
        return hiddenLocation;
    }

    // Setter methods
    public void setSecretCode(String code) {
        this.secretCode = code;
    }

    public void setHiddenLocation(String location) {
        this.hiddenLocation = location;
    }

    // Display all info hierarchically
    public void displayBlackMarket(int indent) {
        String sp = " ".repeat(indent);
        System.out.println(sp + "Secret Code     : " + getSecretCode());
        System.out.println(sp + "Hidden Location : " + getHiddenLocation());

        // Display Market attributes
        System.out.println(sp + "Market ID       : " + getIdMarket());
        System.out.println(sp + "Name            : " + getMarketName());
        System.out.println(sp + "Location        : " + getMarketLocation());
        System.out.println(sp + "Operating Hours : " + getOperatingHours());
        System.out.println();

        // Display Sellers and their products
        if (!getSellerList().isEmpty()) {
            System.out.println(sp + "    Sellers:");
            for (Seller seller : getSellerList()) {
                seller.displaySeller(indent + 8);
            }
        }
        System.out.println();
    }

    // Overload untuk default indent = 0
    public void displayBlackMarket() {
        displayBlackMarket(0);
    }
}
