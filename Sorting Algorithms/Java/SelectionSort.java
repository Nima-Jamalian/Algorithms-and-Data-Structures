import java.util.Arrays;

public class SelectionSort {
    
    private static int[] selectionSort(int[] array){
        for(int i=0; i<array.length-1;i++){
            int minIdex = i;
            for(int j=i; j<array.length;j++){
                if(array[j] < array[minIdex]){
                    minIdex = j;
                }
            }
            swap(array, i, minIdex);
            System.out.println("Pass " + i + " =" + Arrays.toString(array));
        }
        return array;
    }

    private static void swap(int[] array, int i, int j){
        int temp = array[j];
        array[j] = array[i];
        array[i] = temp;
    }
    public static void main(String[] args) {
        int[] test = {1,2,5,-2,10};
        int[] result = selectionSort(test);
        System.out.println("Output = " + Arrays.toString(result));
    }


}