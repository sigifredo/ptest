/**
 * Author: Sigifredo Escobar Gómez
 * Email: sigifredo89@gmail.com
 * Date: Sun, 23 Feb 2014 17:00:05 -0500
 * Algorithm: Gnome Sort
 */

import java.util.Scanner;

class gnome
{

    public static void gnome(int[] arr)
    {
        int i = 1;
    
        while (i <= (arr.length-1))
        {
            if (arr[i-1] <= arr[i])
                i++;
            else
            {
                arr[i] = arr[i] + arr[i-1];
                arr[i-1] = arr[i] - arr[i-1];
                arr[i] = arr[i] - arr[i-1];
    
                if (i > 1)
                    i--;
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

        gnome(arr);

        for (int i = 0; i < n-1; i++)
            System.out.print("" + arr[i] + ",");
        System.out.println("" + arr[arr.length-1]);
    }
}
