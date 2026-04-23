package OOPS.ClassesAndObjects.FinalKeyword;

public class FinalKeyword {
    public static void main(String[] args) {
        // Final variable
        final double PI = 3.14;
        // PI = 3.14159; // Error: cannot assign a value to final variable PI
        System.out.println("Value of PI: " + PI);

        // Final method
        Child child = new Child();
        child.display(); // Output: This is the final method in the parent class.

        // Final class
        // FinalClass finalClass = new FinalClass(); // Error: cannot instantiate a final class
    }
}

// Final method example
class Parent {
    final void display() {
        System.out.println("This is the final method in the parent class.");
    }
}

class Child extends Parent {
    // void display() { // Error: cannot override the final method from Parent
        // System.out.println("Trying to override the final method.");
    // }
}
