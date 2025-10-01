public class Person {
    private int idPerson;
    private String name;
    private String address;

    // Default constructor
    public Person() {
        this.idPerson = 0;
        this.name = "";
        this.address = "";
    }

    // Parameterized constructor
    public Person(int idPerson, String name, String address) {
        this.idPerson = idPerson;
        this.name = name;
        this.address = address;
    }

    // Setter
    public void setName(String name) {
        this.name = name;
    }

    public void setAddress(String address) {
        this.address = address;
    }

    // Getter
    public int getIdPerson() {
        return this.idPerson;
    }

    public String getName() {
        return this.name;
    }

    public String getAddress() {
        return this.address;
    }
}
