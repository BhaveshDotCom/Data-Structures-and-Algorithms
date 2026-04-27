package DSA.Array;

public class ArrayBasic {
    public static void main(String[] args) {
        int[] arr = new int[5]; // declaration and instantiation
        arr[0] = 10; // initialization
        arr[1] = 20;
        arr[2] = 30;
        arr[3] = 40;
        arr[4] = 50;

        // Accessing elements
        System.out.println("First element: " + arr[0]);
        System.out.println("Third element: " + arr[2]);

        // Iterating through the array
        System.out.println("All elements in the array:");
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }
}
