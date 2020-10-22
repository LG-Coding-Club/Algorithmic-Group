import java.util.Arrays;

public class SelectionSort {
    

    public static void main(final String[] args) {
        int[] arr = {78, 32, 48, 1024, 69, 12, 5, 420, 2048, 5, -7, 0};
        //System.out.println(Arrays.toString(arr));
        printArray(arr);
        selectionSort(arr);
        printArray(arr);
    }

    public static void printArray(int[] arr) {
        System.out.print("\n\n[ "); //[ 78 32 48 ... ] \n
        for(int i = 0; i < arr.length; i++)
            System.out.print(arr[i] + " ");
        System.out.println("]");
    }

    public static void selectionSort(int[] arr) {
        int length = arr.length; // {78, 32, 48, 1024, 69, 12, 5, 420, 2048, 5, -7, 0}
        for(int i = 0; i < length-1; i++) {
            int min_idx = i;
            for(int j = i+1; j < length; j++) 
                if(arr[j] < arr[min_idx])
                    min_idx = j;
            int temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
            System.out.println(Arrays.toString(arr));
        }
    }
}
