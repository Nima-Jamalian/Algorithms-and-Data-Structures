import java.util.Arrays;
public class CountingSort {
    public static void main(String[] args) {
        int[] input = {5,1,4,2,8};
        System.out.println("Unsorted Array = " + Arrays.toString(input));
        CountingSort(input);
        System.out.println("Sorted Array = " + Arrays.toString(input) + " (Using Counting Sort)");
    }

    public static int[] CountingSort(int[] array){
        int max = Arrays.stream(array).max().getAsInt();
        int count[] = new int[max + 1];

        for (int i : array) {
            count[i]++;
        }

        int array_idx = 0;
        for(int i =0; i<count.length; i++){
            while(count[i] != 0){
                array[array_idx] = i;
                count[i] -= 1;
                array_idx++;
            }
        }
        return array;
    }
}
