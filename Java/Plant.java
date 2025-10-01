public class Plant {
    private int idPlant;
    private String plantName;
    private double price;
    private String plantType; // Legal / Illegal

    // Default constructor
    public Plant() {
        this.idPlant = 0;
        this.plantName = "";
        this.price = 0.0;
        this.plantType = "Legal";
    }

    // Parameterized constructor
    public Plant(int idPlant, String plantName, double price, String plantType) {
        this.idPlant = idPlant;
        this.plantName = plantName;
        this.price = price;
        this.plantType = plantType;
    }

    // Setter
    public void setPlantName(String plantName) {
        this.plantName = plantName;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public void setPlantType(String plantType) {
        this.plantType = plantType;
    }

    // Getter
    public int getIdPlant() {
        return this.idPlant;
    }

    public String getPlantName() {
        return this.plantName;
    }

    public double getPrice() {
        return this.price;
    }

    public String getPlantType() {
        return this.plantType;
    }

    // Display method
    public void displayPlant(int indent) {
        String sp = " ".repeat(indent);
        System.out.println(sp + "Plant ID    : " + getIdPlant());
        System.out.println(sp + "Plant Name  : " + getPlantName());
        System.out.println(sp + "Plant Price : " + getPrice());
        System.out.println(sp + "Plant Type  : " + getPlantType());
        System.out.println();
    }
}
