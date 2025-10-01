from Person import Person

class Police(Person):
    def __init__(self, id_person=0, name="", address="", badge_number="", rank=""):
        # Panggil constructor parent (Person)
        super().__init__(id_person, name, address)
        self.badge_number = badge_number
        self.rank = rank

    # Setter
    def set_badge_number(self, badge_number):
        self.badge_number = badge_number

    def set_rank(self, rank):
        self.rank = rank

    # Getter
    def get_badge_number(self):
        return self.badge_number

    def get_rank(self):
        return self.rank

    # Display
    def display_police(self, indent=0):
        sp = " " * indent
        print(f"{sp}Police ID  : {self.get_id_person()}")
        print(f"{sp}Name       : {self.get_name()}")
        print(f"{sp}Address    : {self.get_address()}")
        print(f"{sp}Badge No   : {self.get_badge_number()}")
        print(f"{sp}Rank       : {self.get_rank()}\n")

    def __del__(self):
        # Destructor opsional di Python
        pass
