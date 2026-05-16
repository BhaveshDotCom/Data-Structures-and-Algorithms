package OOPS.NestedClasses;

public class InnerClass {
    public static void main(String[] args) {
    
        // Create
    Outer outer = new Outer();
    Outer.Inner inner = outer.new Inner(); // A non-static inner class always needs an object of the outer class because it is connected to the outer object.
    // Outer.Inner innerObj = new Outer().new Inner(); // Short-hand, cannot directly call outer class methods using innerObj
    
    // Access
    System.out.println("Inner Number: " +inner.displayNum());
    System.out.println("Outer Number via Inner: " +inner.displayNum(true));

    }
}

class Outer {

    private int num = 100;

    class Inner {

        private int num = 99;

        int displayNum(){
            return num;
        }
        int displayNum(Boolean isViaOuter){

            if(isViaOuter){
                return Outer.this.num;
            }
            return 0;
        }

    }
}