package OOPS.ClassesAndObjects;

class College {
    void main(String[] args) {
        Student studentOne = new Student();
        studentOne.name = "Bhavesh Upadhyay";
        studentOne.ID = "AIML060";
        studentOne.EnrollmentNumber = 12345678;

        studentOne.printDetail();
    }
}

class Student {
    String name;
    String ID;
    int EnrollmentNumber;

    void printDetail(){
        if(ID.contains("AIML")){
            System.out.printf("Name: %s\nEnrollment Number: %d\nBranch: AIML\n", name, EnrollmentNumber);
        }
    }
}