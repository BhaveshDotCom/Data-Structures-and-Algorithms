package OOPS.ClassesAndObjects.StaticKeyword;

// A static method can directly access only static variables and static methods
// It cannot directly access non-static (instance) members


// Static methods belong to the class, not to objects
// They are loaded before any object is created
// Non-static members belong to specific objects
// Since no object exists, the static method does not know which instance to use

// Make the member static
// Or create an object inside the static method to access instance data

public class AdvancedStaticMethod {
    public static void main(String[] args) {
        Square.squareNum();
        Cube.cubeNum();
    }
}

// Method One
class Cube {
    static int x = 4;

    static void cubeNum() {
        System.out.println(x*x*x);
    }
}


// Method 2
class Square {
    int x = 4;

    static void squareNum() {
        Square squareOf = new Square();
        System.out.println(squareOf.x * squareOf.x);
    }
}

