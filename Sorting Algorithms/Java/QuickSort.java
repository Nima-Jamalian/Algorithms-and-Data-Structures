import java.util.Arrays;
public class QuickSort {
    
static int partition (int a[], int start, int end)  
{  
    int pivot = a[end];//pivot element  
    int i = (start - 1);  
  
    for (int j = start; j < end ; j++)  
    {  
        //if current element is smaller than the pivot  
        if (a[j] < pivot)  
        {  
            i++; // increment index of smaller element  
            swap(a, i, j);
        }  
    }  
    i++;
    swap(a, i, end);
    return (i);  
}  
  
/*
 Time O(n*logn) | Space O(log n)
 Not stable
 Not adaptive
 */
static void quickSort(int array[], int start, int end) 
{  
    if (start < end)  
    {  
        int p = partition(array, start, end);//p is partitioning index  
        quickSort(array, start, p - 1);  
        quickSort(array, p + 1, end);  
    }  
}  

    private static void swap(int[] array, int i, int j){
        int temp = array[j];
        array[j] = array[i];
        array[i] = temp;
    }

    public static void main(String[] args) {
        int[] test = {1,2,5,-3,10};
        System.out.println("Input = " + Arrays.toString(test));
        quickSort(test, 0, test.length-1);
        System.out.println("Output = " + Arrays.toString(test));
    }
}