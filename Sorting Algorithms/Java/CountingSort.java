import java.util.Arrays;
public class CountingSort {

    /*
     Time O(n+k) | Space O(k)
     Stable
     Not adaptive
     */
    public static int[] CountingSort(int[] array){
        //get the maximum element
        int max = Arrays.stream(array).max().getAsInt();

        //create count array
        int count[] = new int[max + 1];

        //populate count array
        for (int i=0; i<array.length; i++) {
            count[array[i]]++;
        }
        
        //sort array
        int arrayIdx = 0;
        for(int i =0; i<count.length; i++){
            while(count[i] != 0){
                array[arrayIdx] = i;
                count[i] -= 1;
                arrayIdx++;
            }
        }
        return array;
    }

        public static void main(String[] args) {
        int[] input = {5,1,4,2,8};
        System.out.println("Unsorted Array = " + Arrays.toString(input));
        CountingSort(input);
        System.out.println("Sorted Array = " + Arrays.toString(input) + " (Using Counting Sort)");
    }
}
