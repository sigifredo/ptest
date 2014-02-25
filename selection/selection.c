/**
 * Author: Sigifredo Escobar Gómez
 * Email: sigifredo89@gmail.com
 * Date: Sun, 23 Feb 2014 13:14:39 -0500
 * Algorithm: Selection Sort
 */

#include <stdio.h>
#include <stdlib.h>

void swap(int * v1, int * v2);

void section(int * arr, int n)
{
    int i, j, minimum;

    for (i = 0; i < n-1; i++)
    {
        minimum = i;

        for (j = i+1; j < n; j++)
            if (arr[j] < arr[minimum])
                minimum = j;

        if (minimum != i)
            swap(arr+i, arr+minimum);
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

    section(arr, n);

    for (i = 0; i < n-1; i++)
        printf("%d,", arr[i]);
    printf("%d\n", arr[i]);

    free(arr);
    return 0;
}

void swap(int * v1, int * v2)
{
    *v1 = *v1 + *v2;
    *v2 = *v1 - *v2;
    *v1 = *v1 - *v2;
}
