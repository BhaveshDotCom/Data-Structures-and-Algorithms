package Foundation.BasicMath;

import java.util.Collections;

public class GCDEuclidean {
    public static void main(String[] args) {
        System.out.println(GCDOne(18,12));
        System.out.println(GCDTwo(12,18));
    }

    public static int GCDOne(int num1, int num2){
        while (num1 > 0 && num2 > 0) {
            if(num1 > num2) num1 = num1 % num2;
            else num2 %= num1;
        }
        if(num1 == 0) return num2;
        else return num1;
    }

    public static int GCDTwo(int num1, int num2){
        while(num2 != 0){
            int temp = num1%num2;
            num1 = num2;
            num2 = temp;
        }
        return num1;
    }
    
}
