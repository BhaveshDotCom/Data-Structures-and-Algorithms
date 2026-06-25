package Foundation.BasicMath;

public class ReverseANumber {
    void main(String[] args) {
        System.out.println(reverse(2147483647));
    }

    int reverse(int num){
        long reversedNum = 0;
        while(num != 0){
            reversedNum = (reversedNum*10)+(num%10);
            num/=10;
        }

        if(reversedNum > Integer.MAX_VALUE || reversedNum < Integer.MIN_VALUE) return 0;
        else return (int) reversedNum;
    }

    
    
}
