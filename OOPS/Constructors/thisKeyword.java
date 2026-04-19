package OOPS.Constructors;

public class thisKeyword {
    public static void main(String[] args) {
        Student studentOne = new Student("Bhavesh", 60);
        System.out.println((studentOne.name).toUpperCase());
    }
}

class Student {
    String name;
    int enrollmentNumber;

    Student(String name, int enrollmentNumber) {
         this.name = name;
         this.enrollmentNumber = enrollmentNumber;
    }
} 