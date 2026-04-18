package OOPS.ClassesAndObjects;

class College {
    public static void main(String[] args) {
        Student studentOne = new Student();
        studentOne.name = "Bhavesh Upadhyay";
        studentOne.ID = "AIML060";
        studentOne.EnrollmentNumber = 12345678;

        studentOne.printBranch();
    }
}

class Student {
    String name;
    String ID;
    int EnrollmentNumber;

    void printBranch(){
        if(ID.contains("AIML")){
            System.out.printf("Name: %s\nEnrollment Number: %d\nBranch: AIML\n", name, EnrollmentNumber);
        }
    }
}