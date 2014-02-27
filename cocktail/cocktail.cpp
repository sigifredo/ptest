/**
 * Author: Sigifredo Escobar Gómez
 * Email: sigifredo89@gmail.com
 * Date: Wed, 26 Feb 2014 22:23:11 -0500
 * Algorithm: Cocktail Sort
 */


#include <cstdio>
#include <cstdlib>

void cocktail(int * arr, const int& n)
{
    int left, right;
    bool swap;

    left = 1;
    right = n-1;

    do
    {
        swap = false;
        for (int i = right; i > left; i--)
            if (arr[i-1] > arr[i])
            {
                arr[i] = arr[i] + arr[i-1];
                arr[i-1] = arr[i] - arr[i-1];
                arr[i] = arr[i] - arr[i-1];

                swap = true;
            }

        for (int i = left; i < right; i++)
            if (arr[i-1] > arr[i])
            {
                arr[i] = arr[i] + arr[i-1];
                arr[i-1] = arr[i] - arr[i-1];
                arr[i] = arr[i] - arr[i-1];

                swap = true;
            }
    }
    while (swap);
}

int main()
{
    int i, n;
    int * arr;

    std::scanf("%d", &n);

    arr = new int[n];

    for (i = 0; i < n; i++)
        std::scanf("%d", arr+i);

    cocktail(arr, n);

    for (i = 0; i < n-1; i++)
        printf("%d,", arr[i]);
    printf("%d\n", arr[i]);

    delete [] arr;
}
