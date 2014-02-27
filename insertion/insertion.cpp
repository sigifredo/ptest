/**
 * Author: Sigifredo Escobar Gómez
 * Email: sigifredo89@gmail.com
 * Date: Wed, 26 Feb 2014 22:26:02 -0500
 * Algorithm: Insertion Sort
 */

#include <cstdio>
#include <cstdlib>

void insertion(int * arr, const int& n)
{
    int j, tmp;

    for (int i = 1; i < n; i++)
    {
        if (arr[i-1] > arr[i])
        {
            tmp = arr[i];
            j = i - 1;
            while (j >= 0 && arr[j] > tmp)
            {
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = tmp;
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

    insertion(arr, n);

    for (i = 0; i < n-1; i++)
        printf("%d,", arr[i]);
    printf("%d\n", arr[i]);

    delete [] arr;
}
