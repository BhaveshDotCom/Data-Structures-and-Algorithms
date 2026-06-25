package Foundation.BasicMath;

public class ArmstrongNumber {
    public static void main(String[] args) {
        int num = 1531;
        if(num == armstrong(num)) System.out.println("Armstrong Number");
        else System.out.println("Not an Armstrong Number");
    }
    
    public static int armstrong(int num){
        int numDup = num;
        int sum = 0;
        int count = 0;

        while (numDup != 0) {
            count++;
            numDup/=10;
        }

        while (num != 0) {
            sum+=Math.powExact(num%10,count);
            num/=10;
        }

        return sum;

    }
}
