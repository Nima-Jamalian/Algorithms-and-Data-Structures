import java.util.Arrays;

public class BubbleSort {
    public static void main(String[] args) {
        int[] input = {5,1,4,2,8};
        System.out.println("Unsorted Array = " + Arrays.toString(input));
        BubbleSort(input);
        System.out.println("Sorted Array = " + Arrays.toString(input) + " (Using Bubble Sort)");
    }
    /*
     * Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping
     *  the adjacent elements if they are in the wrong order.
     * Worst Case Time Complexity [ Big-O ]: O(n^2) 
     * Best Case Time Complexity [Big-omega]: O(n) (When the list is already sorted)
     * Average Time Complexity [Big-theta]: O(n^2) 
     * Space Complexity: O(1) (Only a single additional memory space is required i.e. for temp variable.)
     */
    public static int[] BubbleSort(int[] array){
        int n = array.length - 1;
        boolean swapped = true;
        int temp;
        while(swapped){
            swapped = false;
            for(int i=0; i<n; i++){
                if(array[i]> array[i+1]){
                    temp = array[i];
                    array[i] = array[i+1];
                    array[i+1] = temp;
                    swapped = true;
                }
            }
            n--;
        }
        return array;
    }
}
