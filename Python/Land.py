from Plant import Plant

class Land:
    def __init__(self, id_land=0, land_location=""):
        self.id_land = id_land
        self.land_location = land_location
        self.plant_list = []

    # Getter methods
    def get_id_land(self):
        return self.id_land

    def get_land_location(self):
        return self.land_location

    def get_plant_list(self):
        return self.plant_list

    # Setter methods
    def set_land_location(self, land_location):
        self.land_location = land_location

    def set_plant_list(self, daftar):
        self.plant_list = daftar

    # Tambah Plant ke list
    def add_plant(self, plant: Plant):
        self.plant_list.append(plant)

    # Display Land info
    def display_land(self, indent=0):
        sp = " " * indent
        print(f"{sp}Land ID       : {self.get_id_land()}")
        print(f"{sp}Land Location : {self.get_land_location()}\n")

        if self.plant_list:
            print(f"{sp}    Plant:")
            for plant in self.plant_list:
                plant.display_plant(indent + 8)

    def __del__(self):
        pass
