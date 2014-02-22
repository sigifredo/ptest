/**
 * Author: Sigifredo Escobar Gómez
 * Email: sigifredo89@gmail.com
 * Date: Sat, 22 Feb 2014 16:54:18 -0500
 * Algorithm: Cocktail Sort
 */

import java.util.Scanner;

class cocktail
{

    public static void cocktail(int[] arr)
    {
        int left, right;
        boolean swap;

        left = 1;
        right = arr.length-1;

        do
        {
            swap = false;
            for (int i = right; i > left; i--)
            {
                if (arr[i-1] > arr[i])
                {
                    arr[i] = arr[i] + arr[i-1];
                    arr[i-1] = arr[i] - arr[i-1];
                    arr[i] = arr[i] - arr[i-1];

                    swap = true;
                }
            }

            for (int i = left; i < right; i++)
            {
                if (arr[i-1] > arr[i])
                {
                    arr[i] = arr[i] + arr[i-1];
                    arr[i-1] = arr[i] - arr[i-1];
                    arr[i] = arr[i] - arr[i-1];

                    swap = true;
                }
            }
        }
        while (swap);
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

        cocktail(arr);

        for (int i = 0; i < n-1; i++)
            System.out.print("" + arr[i] + ",");
        System.out.println("" + arr[arr.length-1]);
    }

}
