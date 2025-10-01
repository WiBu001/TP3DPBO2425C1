class Plant:
    def __init__(self, id_plant=0, plant_name="", price=0.0, plant_type="Legal"):
        self.id_plant = id_plant
        self.plant_name = plant_name
        self.price = price
        self.plant_type = plant_type

    # Setter
    def set_plant_name(self, plant_name):
        self.plant_name = plant_name

    def set_price(self, price):
        self.price = price

    def set_plant_type(self, plant_type):
        self.plant_type = plant_type

    # Getter
    def get_id_plant(self):
        return self.id_plant

    def get_plant_name(self):
        return self.plant_name

    def get_price(self):
        return self.price

    def get_plant_type(self):
        return self.plant_type

    # Display method
    def display_plant(self, indent=0):
        sp = " " * indent
        print(f"{sp}Plant ID    : {self.get_id_plant()}")
        print(f"{sp}Plant Name  : {self.get_plant_name()}")
        print(f"{sp}Plant Price : {self.get_price()}")
        print(f"{sp}Plant Type  : {self.get_plant_type()}\n")

    def __del__(self):
        # Destructor (opsional di Python, biasanya tidak diperlukan)
        pass
