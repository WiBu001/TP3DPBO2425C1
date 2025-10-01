import java.util.List;

public class LegalMarket extends Market {
    private String licenseNumber;
    private double taxRate;

    // Default constructor
    public LegalMarket() {
        super();
        this.licenseNumber = "";
        this.taxRate = 0.0;
    }

    // Parameterized constructor
    public LegalMarket(int idMarket, String name, String location, String hours,
                       String licenseNumber, double taxRate) {
        super(idMarket, name, location, hours);
        this.licenseNumber = licenseNumber;
        this.taxRate = taxRate;
    }

    // Getter methods
    public String getLicenseNumber() {
        return licenseNumber;
    }

    public double getTaxRate() {
        return taxRate;
    }

    // Setter methods
    public void setLicenseNumber(String licenseNumber) {
        this.licenseNumber = licenseNumber;
    }

    public void setTaxRate(double taxRate) {
        this.taxRate = taxRate;
    }

    // Display method
    public void displayLegalMarket(int indent) {
        String sp = " ".repeat(indent);
        System.out.println(sp + "License Number : " + getLicenseNumber());
        System.out.println(sp + "Tax Rate       : " + getTaxRate() + "%");

        // Display Market attributes
        System.out.println(sp + "Market ID      : " + getIdMarket());
        System.out.println(sp + "Name           : " + getMarketName());
        System.out.println(sp + "Location       : " + getMarketLocation());
        System.out.println(sp + "Operating H.   : " + getOperatingHours());
        System.out.println();

        // Display Sellers
        if (!getSellerList().isEmpty()) {
            System.out.println(sp + "    Sellers:");
            for (Seller seller : getSellerList()) {
                seller.displaySeller(indent + 8);
            }
        }
    }
}
