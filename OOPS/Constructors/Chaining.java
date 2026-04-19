package OOPS.Constructors;


class Student {
    String name; 
    int enrollmentNumber;

    Student(){
        System.out.println("Default Constructor");
    }; // Default


    Student(String name){
        this(name,0);
        System.out.println("Name Constructor");
    }

    Student(String name,int enrollmentNumber){
        System.out.println("Parameterized Constructor");
        this.name = name;
        this.enrollmentNumber = enrollmentNumber;

    }
}

public class Chaining {
    public static void main(String[] args) {
        System.out.println("\nNo Args");
        NoArgs();
        System.out.println("\nOny One Arg");
        OnlyName();
        System.out.println("\nAll Agrs");
        AllArgs();
    }

    public static void NoArgs(){
        Student studenOne = new Student(); // No args
        System.out.println(studenOne.name);
        System.out.println(studenOne.enrollmentNumber);
    }

    public static void OnlyName(){
        Student studenTwo = new Student("Bhavesh"); // Only Name
        System.out.println(studenTwo.name);
        System.out.println(studenTwo.enrollmentNumber);
    }

    public static void AllArgs(){
        Student studenThree = new Student("Upadhyay",60); // Args
        System.out.println(studenThree.name);
        System.out.println(studenThree.enrollmentNumber);

    }
}
