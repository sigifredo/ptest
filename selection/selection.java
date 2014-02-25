/**
 * Author: Sigifredo Escobar Gómez
 * Email: sigifredo89@gmail.com
 * Date: Sun, 23 Feb 2014 13:35:35 -0500
 * Algorithm: Selection Sort
 */

import java.util.Scanner;


class selection
{

    public static void selection(int[] arr)
    {
        int i, j, minimum;

        for (i = 0; i < arr.length-1; i++)
        {
            minimum = i;

            for (j = i+1; j < arr.length; j++)
                if (arr[j] < arr[minimum])
                    minimum = j;

            if (minimum != i)
            {
                arr[i] = arr[i] + arr[minimum];
                arr[minimum] = arr[i] - arr[minimum];
                arr[i] = arr[i] - arr[minimum];
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

        selection(arr);

        for (int i = 0; i < n-1; i++)
            System.out.print("" + arr[i] + ",");
        System.out.println("" + arr[arr.length-1]);
    }

}
