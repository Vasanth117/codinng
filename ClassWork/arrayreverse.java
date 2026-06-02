import java.util.*;
public class arrayreverse { 
    public static void main(String[] args){
        int[] arr ={29,90,87,68,67};
        int n =arr.length;
        int start=0;
        int end =n-1;
        while(start<end){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
        System.out.println(Arrays.toString(arr));}

}