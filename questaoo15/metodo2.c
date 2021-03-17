#include <stdio.h>
#include <stdlib.h>

int Valor(int a[], int n, int maior)
{

    if (n == 0)
    {
        return maior;
    }

    if (a[n] > maior)
    {
        maior = a[n];
        Valor(a, n - 1, maior);
    }

    else
    {
        Valor(a, n - 1, maior);
    }
}
int main()

{
    int a[] = {34, 23, 45, 56, 30, 31, 57, 33, 55, 10};
    int n = sizeof(a) / sizeof(int);
    int maior = 0;
    printf("%d\n", Valor(a, n, maior));

    return 0;
}