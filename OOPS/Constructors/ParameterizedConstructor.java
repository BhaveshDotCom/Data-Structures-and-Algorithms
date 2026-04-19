package OOPS.Constructors;

public class ParameterizedConstructor {
    public static void main(String[] args) {
        Student StudentOne = new Student("Bhavesh Upadhyay", 60);
        System.out.println(StudentOne.enrollmentNumber);
    }
}

class Student {
    String name;
    int enrollmentNumber;

    Student(String n, int e) {
         name = n;
         enrollmentNumber = e;
    }
}
