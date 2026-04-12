package Basics.Patterns;

public class InvertedRightAngleTriangle {
    static void main() {
        int height = 5;

        for(int row=1; row<=height; row++) {
            for(int col=1; col<=height-row+1; col++) {
                System.out.print(" * ");
            }
            System.out.println();
        }
    }
}
