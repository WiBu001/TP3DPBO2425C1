public class FarmingTool {
    private int idTool;
    private String farmingToolName;

    // Default constructor
    public FarmingTool() {
        this.idTool = 0;
        this.farmingToolName = "";
    }

    // Parameterized constructor
    public FarmingTool(int idTool, String farmingToolName) {
        this.idTool = idTool;
        this.farmingToolName = farmingToolName;
    }

    // Getter methods
    public int getIdTool() {
        return idTool;
    }

    public String getFarmingToolName() {
        return farmingToolName;
    }

    // Setter methods (tanpa setter untuk idTool)
    public void setFarmingToolName(String farmingToolName) {
        this.farmingToolName = farmingToolName;
    }

    // Display method
    public void displayTools(int indent) {
        String sp = " ".repeat(indent);
        System.out.println(sp + "Tool ID  : " + getIdTool());
        System.out.println(sp + "Tool Name: " + getFarmingToolName());
        System.out.println();
    }
}
