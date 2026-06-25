package Foundation.BasicMath;

public class DigitExtraction {
    public static void main(String[] args) {
        
        int num = 128907;
        // Extract unit place digit
        System.out.println(num%10);
        // Print Reamining Number after Extracting unit place digit
        num/=10;

        // Extract all digits starting form unit place
        System.out.println(num);
        while (num > 0) {
            System.out.println(num%10);
            num/=10;
        }
    }
}
