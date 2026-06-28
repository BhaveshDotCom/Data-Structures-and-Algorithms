package Foundation.BasicRecursion;

public class Implementation {
    public static void main(String[] args){
        int num = 10;
        counting(num);
        lang(5,"Java");
    }

    public static void counting(int num){
        if(num <=0) return;
        else {
            System.out.println(num);
            counting(num-1);
        }
    }

    public static void lang(int num, String str){
        if(num <=0) return;
        else{
            System.out.println(str);
            lang(num-1,str);
        }
    }
}
