import java.util.Arrays;
public class SelectionSort {

    public static void main(String[] args) {
        int[] input = {5,1,4,2,8};
        System.out.println("Unsorted Array = " + Arrays.toString(input));
        SelectionSort(input);
        System.out.println("Sorted Array = " + Arrays.toString(input) + " (Using Selection Sort)");
    }

    public static int[] SelectionSort(int[] array){
        //One by one move boundary of unsorted sub array
        for(int i=0; i < array.length -1; i++){
            int min_idx = i;

            //Find the minimum element in unsorted array.
            for(int j=i+1; j<array.length; j++){
                if(array[j] < array[min_idx]){
                    min_idx = j;
                }
            }

            //Swap found minimum element to current i position
            int temp = array[min_idx];
            array[min_idx] = array [i];
            array[i] = temp;
        }
        return array;
    }
}
