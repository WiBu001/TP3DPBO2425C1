import java.util.ArrayList;
import java.util.List;

public class PoliceStation {
    private int idPoliceStation;
    private String policeStationName;
    private String policeStationAddress;
    private List<Police> listPolice;

    // Default constructor
    public PoliceStation() {
        this.idPoliceStation = 0;
        this.policeStationName = "";
        this.policeStationAddress = "";
        this.listPolice = new ArrayList<>();
    }

    // Parameterized constructor
    public PoliceStation(int idPoliceStation, String name, String address) {
        this.idPoliceStation = idPoliceStation;
        this.policeStationName = name;
        this.policeStationAddress = address;
        this.listPolice = new ArrayList<>();
    }

    // Getter methods
    public int getIdPoliceStation() {
        return this.idPoliceStation;
    }

    public String getPoliceStationName() {
        return this.policeStationName;
    }

    public String getPoliceStationAddress() {
        return this.policeStationAddress;
    }

    public List<Police> getListPolice() {
        return this.listPolice;
    }

    // Setter methods (ID tidak ada setter)
    public void setPoliceStationName(String name) {
        this.policeStationName = name;
    }

    public void setPoliceStationAddress(String address) {
        this.policeStationAddress = address;
    }

    public void setListPolice(List<Police> daftar) {
        this.listPolice = daftar;
    }

    // Tambah Police ke list
    public void addPolice(Police police) {
        this.listPolice.add(police);
    }

    // Display
    public void displayPoliceStation(int indent) {
        String sp = " ".repeat(indent);
        System.out.println(sp + "Police Station ID : " + getIdPoliceStation());
        System.out.println(sp + "Name              : " + getPoliceStationName());
        System.out.println(sp + "Address           : " + getPoliceStationAddress());
        System.out.println();

        if (!listPolice.isEmpty()) {
            System.out.println(sp + "    Police Officers:");
            for (Police p : listPolice) {
                p.displayPolice(indent + 8); // tampilkan detail police
            }
        }
        System.out.println();
    }
}
