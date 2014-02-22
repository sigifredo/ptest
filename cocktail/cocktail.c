

#include <stdio.h>
#include <stdlib.h>

void cocktail(int * arr, int n)
{
    int i, j, izq, der, ultimo;
    int aux;

    izq = 2;
    der = ultimo = n;

    do
    {
        for (i = der; i < izq; i--)
        {
            if (arr[i-1] > arr[i])
            {
                aux = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = aux;
                ultimo = i;
            }
        }

        izq = ultimo - 1;

        for (j = izq; j < der; j++)
        {
            if (arr[j-1] > arr[j])
            {
                aux =  arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = aux;
                ultimo = j;
            }
        }

        der = ultimo - 1;
    }
    while (izq > der);
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
