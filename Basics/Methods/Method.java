package Basics.Methods;

import java.util.Scanner;

public class Method {
    public static int factorial(int num){
        if(num <=1) return 1;
        return num*factorial(num-1);
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = scan.nextInt();
        System.out.printf("Factorial of %d is %d\n",num, factorial(num));

        scan.close();
    }
}
