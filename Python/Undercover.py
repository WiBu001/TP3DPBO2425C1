from Buyer import Buyer
from Police import Police
from Farmer import Farmer

class Undercover(Buyer, Police):
    def __init__(self, 
                 idBuyer: int = 0, buyerName: str = "", buyerAddress: str = "", budget: float = 0.0,
                 idPolice: int = 0, policeName: str = "", policeAddress: str = "", 
                 badgeNumber: str = "", rank: str = "",
                 cover: str = ""):
        # Inisialisasi parent Buyer
        Buyer.__init__(self, idBuyer, buyerName, buyerAddress, budget)
        # Inisialisasi parent Police
        Police.__init__(self, idPolice, policeName, policeAddress, badgeNumber, rank)

        # Atribut tambahan
        self.coverIdentity = cover
        self.targetList: list[Farmer] = []

    # ===== Getter methods =====
    def getCoverIdentity(self) -> str:
        return self.coverIdentity

    def getTargetList(self) -> list:
        return self.targetList

    # ===== Setter methods =====
    def setCoverIdentity(self, cover: str):
        self.coverIdentity = cover

    def setTargetList(self, daftar: list):
        self.targetList = daftar

    # Tambah target (Farmer)
    def add_Target(self, farmer: Farmer):
        self.targetList.append(farmer)

    # Display method
    def display_undercover(self, indent: int = 0):
        sp = " " * indent
        print(f"{sp}Undercover ID       : {self.get_id_person()}")
        print(f"{sp}Real Name           : {self.get_name()}")
        print(f"{sp}Real Address        : {self.get_address()}")
        print(f"{sp}Budget              : {self.get_max_budget()}")   # dari Buyer
        print(f"{sp}Badge Number        : {self.get_badge_number()}") # dari Police
        print(f"{sp}Rank                : {self.get_rank()}")        # dari Police
        print(f"{sp}Cover Identity      : {self.getCoverIdentity()}\n")

        if self.targetList:
            print(f"{sp}    Target Farmers:")
            for f in self.targetList:
                f.display_farmer(indent + 8)

        print()

