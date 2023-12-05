import java.util.Arrays;

public class LinearProbingHashing {
    private static void insert(int[] hashTable, int m, int key){
        int i = 0;
        int idx = (key % m);
        //linear probing
        while (hashTable[idx] != 0) {
            i++;
            idx = ((key % m) + i) % m;
        }
        hashTable[idx] = key;
    }

    private static int search(int[] hashTable, int m, int key){
        int i = 0;
        int idx = (key % m);
        //linear probing
        while (hashTable[idx] != key) {
            //if reach element 0, it means key does not exist
            if(hashTable[idx] == 0){
                return -1;
            }
            i++;
            idx = ((key % m) + i) % m;
        }
        return idx;
    }

    public static void main(String[] args) {
        //modular value
        int m = 10;
        int[] hashTable = new int[m];
        insert(hashTable, m, 8);
        insert(hashTable, m, 3);
        insert(hashTable, m, 7);
        insert(hashTable, m, 5);
        insert(hashTable, m, 16);
        insert(hashTable, m, 4);
        insert(hashTable, m, 20);
        insert(hashTable, m, 25);
        System.out.println(Arrays.toString(hashTable));
        int key = 16;
        System.out.print("Search for element " + key + ":");
        int result = search(hashTable, m, key);
        if(result == -1){
            System.out.println(" Element "+ key + " does not exist.");
        } else {
            System.out.println(" Element " + key + " is located at index " + result);
        }
    }
}

    //basicHashExample();
    // int[] input = {8,3,7,5,16,4,20,25};
    // System.out.println(Arrays.toString(linearProbingHashing(input, 10)));

    // private static int[] linearProbingHashing(int[] input, int m){
    //     int[] output = new int[m];
    //     for(int i=0; i<input.length;i++){
    //         int j=0;
    //         int idx = ((input[i] % m) + j) % m;
    //         while (output[idx] != 0) {
    //             j++;
    //             idx = ((input[i] % m) + j) % m;
    //         }
    //         output[idx] = input[i];
    //     }
    //     return output;
    // }