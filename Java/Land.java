import java.util.ArrayList;
import java.util.List;

public class Land {
    private int idLand;
    private String landLocation;
    private List<Plant> plantList;

    // Default constructor
    public Land() {
        this.idLand = 0;
        this.landLocation = "";
        this.plantList = new ArrayList<>();
    }

    // Parameterized constructor
    public Land(int idLand, String landLocation) {
        this.idLand = idLand;
        this.landLocation = landLocation;
        this.plantList = new ArrayList<>();
    }

    // Getter methods
    public int getIdLand() {
        return idLand;
    }

    public String getLandLocation() {
        return landLocation;
    }

    public List<Plant> getPlantList() {
        return plantList;
    }

    // Setter methods
    public void setLandLocation(String landLocation) {
        this.landLocation = landLocation;
    }

    public void setPlantList(List<Plant> daftar) {
        this.plantList = daftar;
    }

    // Tambah Plant ke list
    public void addPlant(Plant plant) {
        this.plantList.add(plant);
    }

    // Display method
    public void displayLand(int indent) {
        String sp = " ".repeat(indent);
        System.out.println(sp + "Land ID       : " + getIdLand());
        System.out.println(sp + "Land Location : " + getLandLocation());
        System.out.println();

        if (!plantList.isEmpty()) {
            System.out.println(sp + "    Plant:");
            for (Plant plant : plantList) {
                plant.displayPlant(indent + 8);
            }
        }
    }
}
