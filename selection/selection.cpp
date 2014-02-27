/**
 * Author: Sigifredo Escobar Gómez
 * Email: sigifredo89@gmail.com
 * Date: Wed, 26 Feb 2014 22:26:18 -0500
 * Algorithm: Section Sort
 */

#include <cstdio>
#include <cstdlib>

void swap(int * v1, int * v2);

void section(int * arr, const int& n)
{
    for (int i = 0; i < n-1; i++)
    {
        int minimum = i;

        for (int j = i+1; j < n; j++)
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

    std::scanf("%d", &n);

    arr = new int[n];

    for (i = 0; i < n; i++)
        std::scanf("%d", arr+i);

    section(arr, n);

    for (i = 0; i < n-1; i++)
        printf("%d,", arr[i]);
    printf("%d\n", arr[i]);

    delete [] arr;
}

void swap(int * v1, int * v2)
{
    *v1 = *v1 + *v2;
    *v2 = *v1 - *v2;
    *v1 = *v1 - *v2;
}
