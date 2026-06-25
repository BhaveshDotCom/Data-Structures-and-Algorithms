package Foundation.PatternProblems;

public class DiamondSquarePattern {
    public static void main(String[] args) {
        int n=5;
        
        for(int i=1; i<n; i++){
            for(int j=n; j>=i; j--){
                System.out.print("* ");
            }

            for(int j=1; j<= (2*i)-2; j++){
                System.out.print("  ");
            }

            for(int j=n; j>=i; j--){
                System.out.print("* ");
            }
    
            System.out.println();
        }

        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                System.out.print("* ");
            }
            for(int j=1; j<=2*(n-i); j++){
                System.out.print("  ");
            }
            for(int j=1; j<=i; j++){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
    
}
