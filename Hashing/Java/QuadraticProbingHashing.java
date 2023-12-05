import java.util.Arrays;

public class QuadraticProbingHashing {
    private static void insert(int[] hashTable, int m, int key){
        int i = 0;
        int idx = (key % m);
        //quadratic probing
        while (hashTable[idx] != 0) {
            i++;
            idx = ((key % m) + (i*i)) % m;
        }
        hashTable[idx] = key;
    }

    private static int search(int[] hashTable, int m, int key){
        int i = 0;
        int idx = (key % m);
        //quadratic probing
        while (hashTable[idx] != key) {
            //if reach element 0, it means key does not exist
            if(hashTable[idx] == 0){
                return -1;
            }
            i++;
            idx = ((key % m) + (i*i) % m);
        }
        return idx;
    }

    public static void main(String[] args) {
        //modular value
        int m = 10;
        int[] hashTable = new int[m];
        insert(hashTable, m, 13);
        insert(hashTable, m,23);
        insert(hashTable, m, 53);
        insert(hashTable, m, 27);
        System.out.println("Hash Table = " + Arrays.toString(hashTable));
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