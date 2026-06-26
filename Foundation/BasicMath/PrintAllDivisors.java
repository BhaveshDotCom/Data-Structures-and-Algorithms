package Foundation.BasicMath;
import java.util.*;

public class PrintAllDivisors {

    public static void main(String[] args) {
        System.out.println(divisors(66));
    }

    public static List<Integer> divisors(int num){
        List<Integer> divisorsArr = new ArrayList<>(); 
        for(int i=1; i<=num; i++){
            if((num%i)==0){
                divisorsArr.add(i);
            }
        }
        return divisorsArr;
    }
}