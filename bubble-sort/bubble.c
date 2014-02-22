/**
 * Author: Sigifredo Escobar Gómez
 * Email: sigifredo89@gmail.com
 * Date: Sat, 22 Feb 2014 16:39:47 -0500
 * Algorithm: Bubble Sort
 */

#include <stdio.h>
#include <stdlib.h>

void bubble(int * arr, int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n-1; j++)
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

    scanf("%d", &n);

    arr = (int*) malloc(n*sizeof(int));

    for (i = 0; i < n; i++)
        scanf("%d", arr+i);

    bubble(arr, n);

    for (i = 0; i < n-1; i++)
        printf("%d,", arr[i]);
    printf("%d\n", arr[i]);

    free(arr);
    return 0;
}
