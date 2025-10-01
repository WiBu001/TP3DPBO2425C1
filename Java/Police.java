public class Police extends Person {
    private String badgeNumber;
    private String rank;

    // Default constructor
    public Police() {
        super(); // memanggil constructor Person()
        this.badgeNumber = "";
        this.rank = "";
    }

    // Constructor dengan parameter (include parent)
    public Police(int idPerson, String name, String address, String badgeNumber, String rank) {
        super(idPerson, name, address); // panggil constructor Person
        this.badgeNumber = badgeNumber;
        this.rank = rank;
    }

    // Setter
    public void setBadgeNumber(String badgeNumber) {
        this.badgeNumber = badgeNumber;
    }

    public void setRank(String rank) {
        this.rank = rank;
    }

    // Getter
    public String getBadgeNumber() {
        return this.badgeNumber;
    }

    public String getRank() {
        return this.rank;
    }

    // Display
    public void displayPolice(int indent) {
        String sp = " ".repeat(indent);
        System.out.println(sp + "Police ID  : " + getIdPerson());
        System.out.println(sp + "Name       : " + getName());
        System.out.println(sp + "Address    : " + getAddress());
        System.out.println(sp + "Badge No   : " + getBadgeNumber());
        System.out.println(sp + "Rank       : " + getRank());
        System.out.println();
    }
}
