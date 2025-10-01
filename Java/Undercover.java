import java.util.ArrayList;
import java.util.List;

public class Undercover extends Buyer {
    private Police police;                  // komposisi (daripada multiple inheritance)
    private String coverIdentity;
    private List<Farmer> targetList;

    // Default constructor
    public Undercover() {
        super();
        this.police = new Police();         // inisialisasi objek Police
        this.coverIdentity = "";
        this.targetList = new ArrayList<>();
    }

    // Parameterized constructor
    public Undercover(int idBuyer, String buyerName, String buyerAddress, double budget,
                      int idPolice, String policeName, String policeAddress, String badgeNumber, String rank,
                      String cover) {
        super(idBuyer, buyerName, buyerAddress, budget);
        this.police = new Police(idPolice, policeName, policeAddress, badgeNumber, rank);
        this.coverIdentity = cover;
        this.targetList = new ArrayList<>();
    }

    // ===== Getter methods =====
    public String getCoverIdentity() {
        return this.coverIdentity;
    }

    public List<Farmer> getTargetList() {
        return this.targetList;
    }

    public Police getPolice() {
        return this.police;
    }

    // ===== Setter methods =====
    public void setCoverIdentity(String cover) {
        this.coverIdentity = cover;
    }

    public void setTargetList(List<Farmer> daftar) {
        this.targetList = daftar;
    }

    public void setPolice(Police police) {
        this.police = police;
    }

    // Tambah target (Farmer)
    public void addTarget(Farmer farmer) {
        this.targetList.add(farmer);
    }

    public void displayUndercover(int indent) {
        String sp = " ".repeat(indent);
        System.out.println(sp + "Undercover ID       : " + getIdPerson());
        System.out.println(sp + "Real Name           : " + getName());
        System.out.println(sp + "Real Address        : " + getAddress());
        System.out.println(sp + "Budget              : " + getMaxBudget());
        System.out.println(sp + "Badge Number        : " + police.getBadgeNumber());
        System.out.println(sp + "Rank                : " + police.getRank());
        System.out.println(sp + "Cover Identity      : " + getCoverIdentity());
        System.out.println();

        if (!targetList.isEmpty()) {
            System.out.println(sp + "    Target Farmers:");
            for (Farmer f : targetList) {
                f.displayFarmer(indent + 8);
            }
        }
        System.out.println();
    }
}
