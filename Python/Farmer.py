from Person import Person
from FarmingTool import FarmingTool
from Land import Land

class Farmer(Person):
    def __init__(self, id_person=0, name="", address=""):
        super().__init__(id_person, name, address)
        self.farming_tool_list = []
        self.land_list = []

    # Getter methods
    def get_farming_tool_list(self):
        return self.farming_tool_list

    def get_land_list(self):
        return self.land_list

    # Setter methods
    def set_farming_tool_list(self, daftar):
        self.farming_tool_list = daftar

    def set_land_list(self, daftar):
        self.land_list = daftar

    # Tambah FarmingTool
    def add_farming_tool(self, tool: FarmingTool):
        self.farming_tool_list.append(tool)

    # Tambah Land
    def add_land(self, land: Land):
        self.land_list.append(land)

    # Display Farmer info
    def display_farmer(self, indent=0):
        sp = " " * indent
        print(f"{sp}Farmer ID: {self.get_id_person()}")
        print(f"{sp}Name     : {self.get_name()}")
        print(f"{sp}Address  : {self.get_address()}\n")

        print(f"{sp}    Tools:")
        for tool in self.farming_tool_list:
            tool.display_tools(indent + 8)

        print(f"{sp}    Lands:")
        for land in self.land_list:
            land.display_land(indent + 8)

    def __del__(self):
        pass
