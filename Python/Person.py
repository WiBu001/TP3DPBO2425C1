class Person:
    def __init__(self, id_person=0, name="", address=""):
        self.id_person = id_person
        self.name = name
        self.address = address

    # Setter
    def set_name(self, name):
        self.name = name

    def set_address(self, address):
        self.address = address

    # Getter
    def get_id_person(self):
        return self.id_person

    def get_name(self):
        return self.name

    def get_address(self):
        return self.address

    def __del__(self):
        # Destructor (jarang dipakai di Python, tapi ditulis agar mirip C++)
        pass
