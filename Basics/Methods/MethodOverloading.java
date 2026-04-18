package Basics.Methods;

public class MethodOverloading {

    int sum(int num1, int num2){
        return num1+num2;
    }

    int sum(int num1, int num2, int num3){
        return num1+num2+num3;
    }

    double sum(double num1, double num2){
        return num1+num2;
    }

    public static void main(String[] args) {
        MethodOverloading method = new MethodOverloading();
        System.out.println(method.sum(1,2));
        System.out.println(method.sum(1,2,3));
        System.out.println(method.sum(1.5,2.5));
    }    
}
