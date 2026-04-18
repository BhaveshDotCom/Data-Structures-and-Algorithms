package Basics.Methods;

/*
Method overloading is a feature in Java that allows a class to have multiple methods with the same name but different parameter lists. The difference can be in the number of parameters, type of parameters, or their order, but not just the return type.
*/

public class MethodOverloading {

    // 1. Method with two integer parameters
    int sum(int num1, int num2){
        return num1+num2;
    }

    // 2. Method with three integer parameters
    int sum(int num1, int num2, int num3){
        return num1+num2+num3;
    }

    // 3. Method with two double parameters
    double sum(double num1, double num2){
        return num1+num2;
    }
 
    // 4. Method with one integer and one double parameter
    int sum(int num1, double num2){
        return (int)(num1+num2);
    }

    // 5. Method with one double and one integer parameter
    int sum(double num1, int num2){
        return (int)(num1+num2);
    }

    // 6. Return type cannot be used to overload a method
    // double sum(int num1, int num2){
    //     return (double)(num1+num2);
    // }
    


    public static void main(String[] args) {
        MethodOverloading method = new MethodOverloading();
        System.out.println("1: "+method.sum(1,2));
        System.out.println("2: "+method.sum(1,2,3));
        System.out.println("3: "+method.sum(1.5,2.5));
        System.out.println("4: "+method.sum(1,2.5));
        System.out.println("5: "+method.sum(1.5,2));
    }    
}