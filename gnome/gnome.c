/**
 * Author: Sigifredo Escobar Gómez
 * Email: sigifredo89@gmail.com
 * Date: Sun, 23 Feb 2014 16:48:05 -0500
 * Algorithm: Gnome Sort
 */

#include <stdio.h>
#include <stdlib.h>

void gnome(int * arr, int n)
{
    int i = 1;

    while (i <= (n-1))
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

int main()
{
    int i, n;
    int * arr;

    scanf("%d", &n);

    arr = (int*) malloc(n*sizeof(int));

    for (i = 0; i < n; i++)
        scanf("%d", arr+i);

    gnome(arr, n);

    for (i = 0; i < n-1; i++)
        printf("%d,", arr[i]);
    printf("%d\n", arr[i]);

    free(arr);
    return 0;
}
