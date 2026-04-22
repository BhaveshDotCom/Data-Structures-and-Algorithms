package OOPS.ClassesAndObjects;

public class StaticAndFinal {

    public static void main(String[] args) {
        Identity personOne = new Identity("India", 91); 
        Identity personTwo = new Identity("USA", 1); 

        personOne.printDetail();
        personTwo.planet = "Mars";
        personOne.printDetail();

        Identity.countObj();
        

    }
}



class Identity {
    static String planet = "Earth";
    String country;
    int code;

    static int count = 0;

    static {
        System.out.println("Static block executed. Class loaded successfully");
    }

    Identity(String country, int code) {
        this.country = country;
        this.code = code;
        count++;
    }

    void printDetail() {
        System.out.printf(
            "This is Alien 007 from %s, dialing country code %d for %s.\n",
            planet, code, country
        );
    }

    static void countObj() {
        System.out.println(count);
    }
}