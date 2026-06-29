package Foundation.BasicRecursion;

import java.util.*;

public class ReverseArrayTwoPointer {
    public static void main(String[] args){

        ArrayList<Integer> arr = new ArrayList<>(List.of(1,2,3,4,5,6));
        reverse(arr,0, arr.size()-1);
        System.out.println(arr);
        

    }

    public static void reverse(ArrayList<Integer> arr, int first, int last){
        
        if(first >= last) return;

        Collections.swap(arr, first, last);
        reverse(arr, first+1, last-1);

        return;
    }
}