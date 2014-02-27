/**
 * Author: Sigifredo Escobar Gómez
 * Email: sigifredo89@gmail.com
 * Date: Wed, 26 Feb 2014 22:19:20 -0500
 * Algorithm: Bubble Sort
 */

#include <cstdio>
#include <cstdlib>

void bubble(int * arr, const int& n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
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

int main()
{
    int i, n;
    int * arr;

    std::scanf("%d", &n);

    arr = new int[n];

    for (i = 0; i < n; i++)
        std::scanf("%d", arr+i);

    bubble(arr, n);

    for (i = 0; i < n-1; i++)
        printf("%d,", arr[i]);
    printf("%d\n", arr[i]);

    delete [] arr;
}
