package Basics.Patterns;

public class Pyramid {
    public static void main(String[] args) {
        int height = 5;

        for(int row=1; row<=height; row++) {
            for(int col=1; col<=height-row; col++) {
                System.out.print("   ");
            }

            for(int col=1; col<=(2*row)-1; col++) {
                System.out.print(" * ");
            }
            System.out.println();
        }
    }
}
