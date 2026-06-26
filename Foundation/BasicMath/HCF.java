package Foundation.BasicMath;

public class HCF {
    public static void main(String[] args) {
        System.out.println(GCDOne(12,18));
    }
    
    // O(min(n1, n2))
    public static int GCDOne(int num1, int num2){

        int GCDOfNums = 0;
        
        for(int i=Math.min(num1, num2); i>=1 ; i--){ 
            if(((num1%i) == 0) && ((num2%i) == 0)){ 
                GCDOfNums = i;
                break;
            } 
        }
        return GCDOfNums;
    }

    // O(max(n1, n2))
    public static int GCDTwo(int num1, int num2){
        while (num1 != 0) {
            if(num1 < num2){
                int temp = num1;
                num1 = num2;
                num2 = temp;
            }
            num1 = num1-num2;
        }
        return num2;
    }
}

