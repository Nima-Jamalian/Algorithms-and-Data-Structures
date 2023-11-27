public class LinearSearch {

    private static int linearSearch(int array[], int key){
        for(int i=0; i< array.length; i++){
            if(array[i] == key){
                return i;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        int array[] = {8,7,2,3,4,1};
        int key = 4;

        int result = linearSearch(array, key);
        if(result == -1){
            System.out.println("Element is not present in array");
        } else {
            System.out.println("Element is present ar index " + result);
        }
    }
}