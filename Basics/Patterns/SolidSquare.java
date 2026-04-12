package Basics.Patterns;

public class SolidSquare {
    static void main(String[] args) {
        int width =5 , length = 5;
        for(int row=1; row<=width; row++) {
            for(int col=1; col<=length; col++) {
                System.out.print(" * ");
            }
            System.out.print("\n");
        }

    }
}
