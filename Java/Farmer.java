import java.util.ArrayList;
import java.util.List;

public class Farmer extends Person {
    private List<FarmingTool> farmingToolList;
    private List<Land> landList;

    // Default constructor
    public Farmer() {
        super(); // panggil constructor Person()
        this.farmingToolList = new ArrayList<>();
        this.landList = new ArrayList<>();
    }

    // Parameterized constructor
    public Farmer(int idPerson, String name, String address) {
        super(idPerson, name, address); // panggil constructor Person
        this.farmingToolList = new ArrayList<>();
        this.landList = new ArrayList<>();
    }

    // Getter methods
    public List<FarmingTool> getFarmingToolList() {
        return farmingToolList;
    }

    public List<Land> getLandList() {
        return landList;
    }

    // Setter methods
    public void setFarmingToolList(List<FarmingTool> daftar) {
        this.farmingToolList = daftar;
    }

    public void setLandList(List<Land> daftar) {
        this.landList = daftar;
    }

    // Tambah FarmingTool
    public void addFarmingTool(FarmingTool tool) {
        this.farmingToolList.add(tool);
    }

    // Tambah Land
    public void addLand(Land land) {
        this.landList.add(land);
    }

    // Display Farmer detail
    public void displayFarmer(int indent) {
        String sp = " ".repeat(indent);

        System.out.println(sp + "Farmer ID: " + getIdPerson());
        System.out.println(sp + "Name     : " + getName());
        System.out.println(sp + "Address  : " + getAddress());
        System.out.println();

        System.out.println(sp + "    Tools:");
        for (FarmingTool tool : farmingToolList) {
            tool.displayTools(indent + 8);
        }

        System.out.println(sp + "    Lands:");
        for (Land land : landList) {
            land.displayLand(indent + 8);
        }
    }
}
