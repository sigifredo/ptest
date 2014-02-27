/**
 * Author: Sigifredo Escobar Gómez
 * Email: sigifredo89@gmail.com
 * Date: Wed, 26 Feb 2014 22:24:31 -0500
 * Algorithm: Gnome Sort
 */

#include <cstdio>
#include <cstdlib>

void gnome(int * arr, const int& n)
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

    std::scanf("%d", &n);

    arr = new int[n];

    for (i = 0; i < n; i++)
        std::scanf("%d", arr+i);

    gnome(arr, n);

    for (i = 0; i < n-1; i++)
        printf("%d,", arr[i]);
    printf("%d\n", arr[i]);

    delete [] arr;
}
