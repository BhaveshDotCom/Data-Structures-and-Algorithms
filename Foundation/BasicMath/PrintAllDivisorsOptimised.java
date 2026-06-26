package Foundation.BasicMath;
import java.util.*;

public class PrintAllDivisorsOptimised {
    public static void main(String[] args) {
        System.out.println(divisors(36));
    }

    public static List<Integer> divisors(int num) {
        
        List<Integer> divArr = new ArrayList<>();
        
        for(int i=1; i<=Math.sqrt(num); i++){ // i*i <= n
            if((num%i)==0){
                divArr.add(i);
                if(i != num/i){
                    divArr.add(num/i);
                }
            }
        }

        Collections.sort(divArr);

        return divArr;
    }
    
}
