package Foundation.BasicMath;

public class CountNumberOfDigits {
    public static void main(String[] args) {
        
        int num = 446773;
        int count = 0;
        while(num>0){
            num/=10;
            count++;
        }
        System.out.println(String.format("It's a %d digit number", count));
    }
}
