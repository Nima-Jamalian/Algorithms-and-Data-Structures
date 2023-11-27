public class BinarySearch {
    //Time O(logn) | Space O(logn)
    private static int recursiveBinarySearch(int array[],int start,int end, int key){
        if(start <= end){
            int mid = start + ((end-start) / 2);
            if(array[mid] == key){
                return mid;
            } 
            if (array[mid] > key){
                return recursiveBinarySearch(array, start, mid - 1, key);
            } 
            return recursiveBinarySearch(array, mid + 1, end, key);
        }
        return -1;
    }

    //Time O(logn) | Space O(1)
    private static int binarySearch(int array[],int key){
        int start = 0, end = array.length - 1;
        while(start <= end){
            int mid = start + ((end-start)/2);
            //check if x is present at mid
            if(array[mid] == key){
                return mid;
            }
            //if key is greater, ignore left half
            if(array[mid] < key){
                start = mid +1;
            }
            //if key is smaller, ignore right half
            end = mid -1;
        }
        return -1;
    }
    public static void main(String[] args) {
        int array[] = {1,2,4,8,10,12,20,40,60};
        int key = 60;
        //int result = recursiveBinarySearchbinarySearch(array,0, array.length -1, key);
        int result = binarySearch(array, key);
        if(result == -1){
            System.out.println("Element is not present in array");
        } else {
            System.out.println("Element is present ar index " + result);
        }

        // int s = 4;
        // int e = 8;
        // int mid1 = (s + e) / 2;
        // int mid2 = s + ((e - s)/2);
        // System.out.println(mid1);
        // System.out.println(mid2);
    }
}