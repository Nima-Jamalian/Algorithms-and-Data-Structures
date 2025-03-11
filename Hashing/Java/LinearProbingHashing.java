import java.util.Arrays;

public class LinearProbingHashing {
    /*
     * Linear Probing Hashing
     * h(x) = x % mod
     * h`(x) = (h(x) + f(i)) % mod
     * where f(i) = i
     * i = 0,1,2,3,......
     */
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
        //insert element into hashtable
        int[] input = {1,13,15,5,7,12,25};
        for(int i=0; i<input.length; i++){
            insert(hashTable, m, input[i]);
        }
        //delete input
        input = null; 
        System.out.println("Hash Table = " + Arrays.toString(hashTable));
        int key = 25;
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