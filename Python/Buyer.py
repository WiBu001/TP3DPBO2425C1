from Person import Person
from Market import Market

class Buyer(Person):
    def __init__(self, id_person=0, name="", address="", budget=0.0):
        super().__init__(id_person, name, address)
        self.max_budget = budget
        self.list_market = []

    # ===== Getter methods =====
    def get_max_budget(self):
        return self.max_budget

    def get_list_market(self):
        return self.list_market

    # ===== Setter methods =====
    def set_max_budget(self, budget):
        self.max_budget = budget

    def set_list_market(self, daftar):
        self.list_market = daftar

    # Tambah Market ke daftar
    def add_market(self, market: Market):
        self.list_market.append(market)

    # Display Buyer info
    def display_buyer(self, indent=0):
        sp = " " * indent
        print(f"{sp}Buyer ID   : {self.get_id_person()}")
        print(f"{sp}Name       : {self.get_name()}")
        print(f"{sp}Address    : {self.get_address()}")
        print(f"{sp}Max Budget : {self.get_max_budget()}\n")

        if self.list_market:
            print(f"{sp}    Markets:")
            for m in self.list_market:
                m.display_market(indent + 8)  # tampilkan Market beserta Seller/Farmer
        print()

    def __del__(self):
        pass
