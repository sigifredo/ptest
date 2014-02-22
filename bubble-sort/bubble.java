import java.util.Scanner;

class bubble
{
    public static void bubble(int[] arr)
    {
        for (int i = 0; i < arr.length; i++)
        {
            for (int j = 0; j < arr.length-1; j++)
            {
                if (arr[j] > arr[j+1])
                {
                    arr[j] = arr[j] + arr[j+1];
                    arr[j+1] = arr[j] - arr[j+1];
                    arr[j] = arr[j] - arr[j+1];
                }
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

        bubble(arr);

        for (int i = 0; i < n-1; i++)
            System.out.print("" + arr[i] + ",");
        System.out.println("" + arr[arr.length-1]);
    }
}
