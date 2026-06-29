package Foundation.BasicRecursion;

public class PalindromeString {
    public static void main(String[] args) {
        System.out.println(isPalindromeString("madam",0));
    }

    public static boolean isPalindromeString(String str ,int pointer){
        if(pointer >= str.length()/2) return true;
        if(str.charAt(pointer) != str.charAt(str.length()-pointer-1)) return false;
        return isPalindromeString(str, pointer+1);
        
    }
}
