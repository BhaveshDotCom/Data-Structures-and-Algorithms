package OOPS.NestedClasses;


public class StaticNestedClass {
    public static void main(String[] args) {

        // Concept
        OuterClass myOuterClass = new OuterClass();
        OuterClass.InnerClass myClass = new OuterClass.InnerClass(myOuterClass, "Bhavesh");
        myClass.display();

        // Bank
        BankAccount myBankAccount = new BankAccount();
        System.out.println(myBankAccount.computeSimpleInterest(10000000.0, 5));
    }

}

// Concept
class OuterClass {
    private static int age = 19;
    private String role = "Engineer";

    static class InnerClass {
        OuterClass outerClass;
        private String name;

        InnerClass(OuterClass outerClass,String name){
            this.name = name;
            this.outerClass = outerClass;
        }

        void display(){
            System.out.println("Name: "+name);
            System.out.println("Age: "+age);
            System.out.println("Role: " + outerClass.role); // non-static member of the OuterClass
        }
    }
}

// Bank
class BankAccount {

    // Helper Class
    private static class InterestCalculator {
        static double simpleInterest(double principalAmount, int timeInYears, float rate){
            return (principalAmount*rate*timeInYears)/100;
        }  
    }
        
    public double computeSimpleInterest(double principal, int timeInYears){
        return InterestCalculator.simpleInterest(principal, timeInYears, 9.0f);
    }
}