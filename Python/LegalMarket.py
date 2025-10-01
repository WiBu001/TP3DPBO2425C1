from Market import Market

class LegalMarket(Market):
    def __init__(self, id_market=0, name="", location="", hours="", 
                 license_number="", tax_rate=0.0):
        super().__init__(id_market, name, location, hours)
        self.license_number = license_number
        self.tax_rate = tax_rate

    # Getter methods
    def get_license_number(self):
        return self.license_number

    def get_tax_rate(self):
        return self.tax_rate

    # Setter methods
    def set_license_number(self, license_number):
        self.license_number = license_number

    def set_tax_rate(self, tax_rate):
        self.tax_rate = tax_rate

    # Display Legal Market info
    def display_legal_market(self, indent=0):
        sp = " " * indent
        print(f"{sp}License Number : {self.get_license_number()}")
        print(f"{sp}Tax Rate       : {self.get_tax_rate()}%")
        print(f"{sp}Market ID      : {self.get_id_market()}")
        print(f"{sp}Name           : {self.get_market_name()}")
        print(f"{sp}Location       : {self.get_market_location()}")
        print(f"{sp}Operating H.   : {self.get_operating_hours()}\n")

        if self.get_seller_list():
            print(f"{sp}    Sellers:")
            for seller in self.get_seller_list():
                seller.display_seller(indent + 8)

    def __del__(self):
        pass
