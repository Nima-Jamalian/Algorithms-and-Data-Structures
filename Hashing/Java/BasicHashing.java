import java.util.Arrays;

public class BasicHashing {
    private static int[] hashing(int[] input, int m){
        int[] output = new int[m];
        for(int i=0; i<input.length; i++){
            int idx = input[i] % m;
            output[idx] = input[i];
        }
        return output;
    }

    private static int getKey(int[] hashedData,int m, int target){
        int idx = target % m;
        if(hashedData[idx] == target){
            return idx;
        } else {
            return -1;
        }
    }

    public static void main(String[] args) {

        System.out.println("Basic Hash Example");
        int[] input = {8,2,11,3,5,0,6};
        System.out.println("Input Data = " + Arrays.toString(input));

        int m = 7;
        int[] hashedData = hashing(input, m);
        System.out.println("Hashed Data = " + Arrays.toString(hashedData));

        int target = 5;
        System.out.print("Search for element " + target + ":");
        int result = getKey(hashedData, m, target);
        if(result == -1){
            System.out.println(" Element "+ target + " does not exist.");
        } else {
            System.out.println(" Element " + target + " is located at index " + result);
        }
    }
}