package Foundation.BasicMath;

public class PrimeNumber {
    public static void main(String[] args) {
        if(isPrime(10)) System.out.println("Prime Number");
        else System.out.println("Not a Prime Number");
        
    }

    public static boolean isPrime(int num){
        int count =0;
        for(int i=1; i*i<=num; i++){
            if((num%i)==0){
                count++;
                if(i!=num/i){
                    count++;
                }
            }
        }
        if(count==2) return true;
        else return false;
    }
}
