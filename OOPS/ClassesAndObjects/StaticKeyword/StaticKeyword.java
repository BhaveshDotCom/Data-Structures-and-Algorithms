package OOPS.ClassesAndObjects.StaticKeyword;

public class StaticKeyword {

    public static void main(String[] args) {
        Identity personOne = new Identity("India", 91); 
        Identity personTwo = new Identity("USA", 1); 

        personOne.printDetail();
        personTwo.planet = "Mars"; // changes the single shared static variable, so the value becomes "Mars" for all objects of the class, not just personTwo
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

/*
Parameters cannot be declared static

static is used for class-level members (variables/methods)
Parameters are local to a method call (they exist only during execution)
They belong to the stack (method scope), not the class
So making them static has no meaning in Java’s memory model


A top-level class cannot be static (A top-level class is already independent, so static has no meaning for it)
Only a nested (inner) class can be declared static
*/