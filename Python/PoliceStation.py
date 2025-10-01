from Police import Police

class PoliceStation:
    def __init__(self, id_police_station=0, name="", address=""):
        self.id_police_station = id_police_station
        self.police_station_name = name
        self.police_station_address = address
        self.list_police = []

    # Getter
    def get_id_police_station(self):
        return self.id_police_station

    def get_police_station_name(self):
        return self.police_station_name

    def get_police_station_address(self):
        return self.police_station_address

    def get_list_police(self):
        return self.list_police

    # Setter (id tidak punya setter, sama seperti C++)
    def set_police_station_name(self, name):
        self.police_station_name = name

    def set_police_station_address(self, address):
        self.police_station_address = address

    def set_list_police(self, daftar):
        self.list_police = daftar

    # Tambah police
    def add_police(self, police: Police):
        self.list_police.append(police)

    # Display
    def display_police_station(self, indent=0):
        sp = " " * indent
        print(f"{sp}Police Station ID : {self.get_id_police_station()}")
        print(f"{sp}Name              : {self.get_police_station_name()}")
        print(f"{sp}Address           : {self.get_police_station_address()}\n")

        if self.list_police:
            print(f"{sp}    Police Officers:")
            for p in self.list_police:
                p.display_police(indent + 8)
        print()

    def __del__(self):
        # Destructor opsional di Python
        pass
