from Person import Person
from Plant import Plant
from Farmer import Farmer

class Seller(Person):
    def __init__(self, id_person=0, name="", address=""):
        super().__init__(id_person, name, address)
        self.plant_product_list = []
        self.farmer_list = []

    # Getter
    def get_plant_product_list(self):
        return self.plant_product_list

    def get_farmer_list(self):
        return self.farmer_list

    # Setter
    def set_plant_product_list(self, daftar):
        self.plant_product_list = daftar

    def set_farmer_list(self, daftar):
        self.farmer_list = daftar

    # Tambah Plant ke daftar produk
    def add_plant_product(self, plant: Plant):
        self.plant_product_list.append(plant)

    # Tambah Farmer ke daftar mitra
    def add_farmer(self, farmer: Farmer):
        self.farmer_list.append(farmer)

    # Display Seller
    def display_seller(self, indent=0):
        sp = " " * indent
        print(f"{sp}Seller ID: {self.get_id_person()}")
        print(f"{sp}Name     : {self.get_name()}")
        print(f"{sp}Address  : {self.get_address()}\n")

        if self.plant_product_list:
            print(f"{sp}    Products:")
            for plant in self.plant_product_list:
                plant.display_plant(indent + 8)

        if self.farmer_list:
            print(f"{sp}    Farmers:")
            for farmer in self.farmer_list:
                farmer.display_farmer(indent + 8)

    def __del__(self):
        # Destructor opsional
        pass
