package Foundation.BasicRecursion;

public class PrintLinearlyTillN {
    public static void main(String[] args) {
        
    Solution.linearPrinting(1,7);
 
    }
}

class Solution {

    public static void linearPrinting(int count, int num){
        if(count > num) return;
        else {
            System.out.println(count);
            linearPrinting(count+1, num);
            // System.out.println(count); // Backtracking
        }
    }
}
