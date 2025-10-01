from Market import Market  # asumsi sudah ada file Market.py dengan class Market

class BlackMarket(Market):
    def __init__(self, id_market=0, name="", location="", hours="", 
                 secret_code="", hidden_location=""):
        super().__init__(id_market, name, location, hours)
        self.secret_code = secret_code
        self.hidden_location = hidden_location

    # Getter
    def get_secret_code(self):
        return self.secret_code

    def get_hidden_location(self):
        return self.hidden_location

    # Setter
    def set_secret_code(self, code):
        self.secret_code = code

    def set_hidden_location(self, location):
        self.hidden_location = location

    # Display all info hierarchically
    def display_black_market(self, indent=0):
        sp = " " * indent
        print(f"{sp}Secret Code     : {self.get_secret_code()}")
        print(f"{sp}Hidden Location : {self.get_hidden_location()}")
        print(f"{sp}Market ID       : {self.get_id_market()}")
        print(f"{sp}Name            : {self.get_market_name()}")
        print(f"{sp}Location        : {self.get_market_location()}")
        print(f"{sp}Operating Hours : {self.get_operating_hours()}\n")

        # Tampilkan Seller dan produknya
        if self.get_seller_list():
            print(f"{sp}    Sellers:")
            for seller in self.get_seller_list():
                seller.display_seller(indent + 8)
        print()

    # Destructor (jarang dipakai di Python, tapi bisa ditulis)
    def __del__(self):
        pass
