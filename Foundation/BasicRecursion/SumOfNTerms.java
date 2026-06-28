package Foundation.BasicRecursion;

public class SumOfNTerms {
    public static void main(String[] args) {
        System.out.println(sum(5,7));
        System.out.println(sum(4));
    }

    public static int sum(int count, int num){
        if(count > num) return 0;
        return count + sum(count+1, num);
    }

    public static int sum(int num){
        if(num == 0) return 0;
        return num + sum(num-1);
    }
    
}
