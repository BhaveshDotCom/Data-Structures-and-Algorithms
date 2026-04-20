package Basics;

public class CallBy {

    // Primitive (Pass by Value)
    public static void multiplyByTen(int num) {
        num *= 10;
        System.out.println("Inside method (primitive): " + num);
    }

    // Object (Reference passed by value)
    public static void modifyObject(CallByRef obj) {
        obj.num *= 10;
        System.out.println("Inside method (object): " + obj.num);
    }

    public static void main(String[] args) {

        // Primitive Example 
        int value = 23;
        System.out.println("Before primitive call: " + value);
        multiplyByTen(value);
        System.out.println("After primitive call: " + value);

        System.out.println();

        // Object Example 
        CallByRef obj = new CallByRef(23);
        System.out.println("Before object call: " + obj.num);
        modifyObject(obj);
        System.out.println("After object call: " + obj.num);
    }
}

// Helper Class 
class CallByRef {
    int num;

    CallByRef(int num) {
        this.num = num;
    }
}