/**
 * Author: Sigifredo Escobar Gómez
 * Email: sigifredo89@gmail.com
 * Date: Sat, 22 Feb 2014 16:39:47 -0500
 * Algorithm: Cocktail Sort
 */


#include <stdio.h>
#include <stdlib.h>

void cocktail(int * arr, int n)
{
    int i, left, right, swap;

    left = 0;
    right = n-1;

    do
    {
        swap = 0;
        for (i = right; i > left; i--)
        {
            if (arr[i-1] > arr[i])
            {
                arr[i] = arr[i] + arr[i-1];
                arr[i-1] = arr[i] - arr[i-1];
                arr[i] = arr[i] - arr[i-1];

                swap = 1;
            }
        }

        for (i = left; i < right; i++)
        {
            if (arr[i-1] > arr[i])
            {
                arr[i] = arr[i] + arr[i-1];
                arr[i-1] = arr[i] - arr[i-1];
                arr[i] = arr[i] - arr[i-1];

                swap = 1;
            }
        }
    }
    while (swap);
}

int main()
{
    int i, n;
    int * arr;

    scanf("%d", &n);

    arr = (int*) malloc(n*sizeof(int));

    for (i = 0; i < n; i++)
        scanf("%d", arr+i);

    cocktail(arr, n);

    for (i = 0; i < n-1; i++)
        printf("%d,", arr[i]);
    printf("%d\n", arr[i]);

    free(arr);
    return 0;
}
