/**
 * Author: Sigifredo Escobar Gómez
 * Email: sigifredo89@gmail.com
 * Date: Sun, 23 Feb 2014 16:01:43 -0500
 * Algorithm: Insertion Sort
 */


import java.util.Scanner;

class insertion
{

    public static void insertion(int[] arr)
    {
        for (int i = 1; i < arr.length; i++)
        {
            if (arr[i-1] > arr[i])
            {
                int tmp = arr[i];
                int j = i - 1;
                while (j >= 0 && arr[j] > tmp)
                {
                    arr[j+1] = arr[j];
                    j--;
                }
                arr[j+1] = tmp;
            }
        }
    }

    public static void main(String[] ar)
    {
        int n;
        int [] arr;
        Scanner scan = new Scanner(System.in);

        n = scan.nextInt();
        arr = new int[n];

        for (int i = 0; i < n; i++)
            arr[i] = scan.nextInt();

        insertion(arr);

        for (int i = 0; i < n-1; i++)
            System.out.print("" + arr[i] + ",");
        System.out.println("" + arr[arr.length-1]);
    }

}
