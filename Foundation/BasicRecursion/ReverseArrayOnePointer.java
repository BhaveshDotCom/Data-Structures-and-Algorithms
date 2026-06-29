package Foundation.BasicRecursion;

public class ReverseArrayOnePointer {

    public static void main(){
        int[] arr = {1,2,3,4,5};
        reverse(arr, 0);
        for(int ele : arr) System.out.println(ele);

    }

    public static void reverse(int[] arr, int pointer) {
        if(pointer >= (arr.length)/2 ) return;
        // swap
        int temp = arr[pointer];
        arr[pointer] = arr[arr.length-pointer-1];
        arr[arr.length-pointer-1] = temp;

        // function callrecursion. Use begin +
        reverse(arr, pointer+1);

        return;
    }
}
