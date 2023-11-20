import java.util.Arrays;
public class QuckSort {
/* function that consider last element as pivot,  
place the pivot at its exact position, and place  
smaller elements to left of pivot and greater  
elements to right of pivot.  */  
static int partition (int a[], int start, int end)  
{  
    int pivot = a[end]; // pivot element  
    int i = (start - 1);  
  
    for (int j = start; j <= end - 1; j++)  
    {  
        // If current element is smaller than the pivot  
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
  
/* function to implement quick sort */  
static void quickSort(int a[], int start, int end) /* a[] = array to be sorted, start = Starting index, end = Ending index */  
{  
    if (start < end)  
    {  
        int p = partition(a, start, end);  //p is partitioning index  
        quickSort(a, start, p - 1);  
        quickSort(a, p + 1, end);  
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