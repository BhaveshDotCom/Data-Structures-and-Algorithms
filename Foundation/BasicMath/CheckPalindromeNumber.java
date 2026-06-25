package Foundation.BasicMath;
import java.util.*;

public class CheckPalindromeNumber {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        scan.close();

        if(palindrome(num)==1) System.out.println("Palindrome");
        else System.out.println("Not a Palindrome");
    }

    public static int palindrome(int num){
        int numDup = num;
        int reversed = 0;

        if(num<0) return 0;
        
        else{
            while(num != 0){
                reversed = (reversed*10)+(num%10);
                num/=10;
            }
            if(reversed == numDup) return 1;
            else return 0;
        }
    }
}