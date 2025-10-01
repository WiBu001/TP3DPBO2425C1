class FarmingTool:
    def __init__(self, idTool: int = 0, farmingToolName: str = ""):
        self.idTool = idTool
        self.farmingToolName = farmingToolName

    # Getter methods
    def getIdTool(self) -> int:
        return self.idTool

    def getFarmingToolName(self) -> str:
        return self.farmingToolName

    # Setter methods (tanpa setter untuk idTool)
    def setFarmingToolName(self, farmingToolName: str):
        self.farmingToolName = farmingToolName

    # Display method
    def display_tools(self, indent: int = 0):
        sp = " " * indent
        print(f"{sp}Tool ID  : {self.getIdTool()}")
        print(f"{sp}Tool Name: {self.getFarmingToolName()}\n")

    # Destructor (opsional di Python, biasanya tidak perlu)
    def __del__(self):
        pass
