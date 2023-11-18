import java.util.Arrays;

public class BubbleSort {

    private static int[] bubbleSort(int[] array){
        boolean hasSwapped = false;
        for(int i=0; i<array.length-1; i++){
            hasSwapped = false;
            for(int j=0; j<array.length-1-i;j++){
                if(array[j]>array[j+1]){
                    swap(array, j, j+1);
                    hasSwapped = true;
                }
            }
            //System.err.println("Pass " + i + "= " + Arrays.toString(array));
            if(hasSwapped == false){
                return array;
            }
        }
        return array;
    }

    private static void swap(int[] array, int i, int j){
        int temp = array[j];
        array[j] = array[i];
        array[i] = temp;
    }
    public static void main(String[] args) {
        int[] test = { 0,1,2,3,4};
        int[] result = bubbleSort(test);
        System.out.println(Arrays.toString(result));
    }
}

