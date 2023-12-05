import java.util.Arrays;

public class DoubleHashing {
    private static void insert(int[] hashTable, int m, int r, int key){
        //first hash
        int firstHash = (key % m);
        int idx = firstHash;
        //double hashing
        int i = 0;
        if(hashTable[idx] != 0){
            //second hash
            int secondHash = r - (key % r);
            while (hashTable[idx] != 0) {
                i++;
                idx = (firstHash + (i * secondHash)) % m;
            }
        }
        hashTable[idx] = key;
    }

    private static int search(int[] hashTable, int m, int r, int key){
        int firstHash = (key % m);
        int idx = firstHash;
        int i = 0;
        //double hashing
        if(hashTable[idx] != key){
            //second hash
            int secondHash = r - (key % r);
            while(hashTable[idx] != key){
                //if reach element 0, it means key does not exist
                if(hashTable[idx] == 0){
                    return -1;
                }
                i++;  
                idx = (firstHash + (i * secondHash)) % m;
            }
        }
        return idx;
    }

    public static void main(String[] args) {
        //modular values
        int m = 10;
        int r =7;
        int[] hashTable = new int[m];
        insert(hashTable, m,r, 5);
        insert(hashTable, m,r,15);
        insert(hashTable, m,r, 35);
        insert(hashTable, m,r, 45);
        insert(hashTable, m,r, 85);
        System.out.println("Hash Table = " + Arrays.toString(hashTable));
        int key = 35;
        System.out.print("Search for element " + key + ":");
        int result = search(hashTable, m,r, key);
        if(result == -1){
            System.out.println(" Element "+ key + " does not exist.");
        } else {
            System.out.println(" Element " + key + " is located at index " + result);
        }
    }
}
