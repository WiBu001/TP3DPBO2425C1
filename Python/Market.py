from Seller import Seller

class Market:
    def __init__(self, id_market=0, name="", location="", hours=""):
        self.id_market = id_market
        self.market_name = name
        self.market_location = location
        self.operating_hours = hours
        self.seller_list = []  # list of Seller objects

    # ===== Getter methods =====
    def get_id_market(self):
        return self.id_market

    def get_market_name(self):
        return self.market_name

    def get_market_location(self):
        return self.market_location

    def get_operating_hours(self):
        return self.operating_hours

    def get_seller_list(self):
        return self.seller_list

    # ===== Setter methods =====
    def set_market_name(self, name):
        self.market_name = name

    def set_market_location(self, location):
        self.market_location = location

    def set_operating_hours(self, hours):
        self.operating_hours = hours

    def set_seller_list(self, daftar):
        self.seller_list = daftar

    # Tambah seller ke daftar
    def add_seller(self, seller: Seller):
        self.seller_list.append(seller)

    def display_market(self, indent=0):
        sp = " " * indent
        print(f"{sp}Market ID   : {self.get_id_market()}")
        print(f"{sp}Name        : {self.get_market_name()}")
        print(f"{sp}Location    : {self.get_market_location()}")
        print(f"{sp}Operating H.: {self.get_operating_hours()}\n")

        if self.seller_list:
            print(f"{sp}    Sellers:")
            for seller in self.seller_list:
                seller.display_seller(indent + 8)

    # Destructor
    def __del__(self):
        pass
