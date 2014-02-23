/**
 * Author: Sigifredo Escobar Gómez
 * Email: sigifredo89@gmail.com
 * Date: Sun, 23 Feb 2014 16:01:12 -0500
 * Algorithm: Insertion Sort
 */

#include <stdio.h>
#include <stdlib.h>

void insertion(int * arr, int n)
{
    int i, j, tmp;

    for (i = 1; i < n; i++)
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

    scanf("%d", &n);

    arr = (int*) malloc(n*sizeof(int));

    for (i = 0; i < n; i++)
        scanf("%d", arr+i);

    insertion(arr, n);

    for (i = 0; i < n-1; i++)
        printf("%d,", arr[i]);
    printf("%d\n", arr[i]);

    free(arr);
    return 0;
}
