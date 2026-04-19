package OOPS.Constructors;

public class ExplicitConstructors {
    public static void main(String[] args) {
        Student studentOne = new Student();
        System.out.println(studentOne.name); 
        System.out.println(studentOne.enrollmentNumber); 
        
    }
    
}

class Student {
    String name;
    int enrollmentNumber;

    // Explicit Constructor 
    Student() {
        name = "Bhavesh";
        enrollmentNumber = 61;
    } 
}