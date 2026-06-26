package Foundation.BasicMath;

public class ArmstrongNumber {
    public static void main(String[] args) {
        int num = 1634;
        if(armstrong(num)) System.out.println("Armstrong Number");
        else System.out.println("Not an Armstrong Number");
    }
    
    public static boolean armstrong(int num){
        int numDup = num;
        int sum = 0;
        // int count = 0;
        int count = String.valueOf(num).length();

        // while (numDup != 0) {
        //     count++;
        //     numDup/=10;
        // }


        while (num != 0) {
            sum+=Math.powExact(num%10,count);
            num/=10;
        }

        return sum == numDup;

    }
}
