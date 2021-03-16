#include <stdio.h>
#include <stdlib.h>

int maxsimum(int a[], int l, int r)
{
    if (r - l == 1)
        return a[l];
    int m = (l + r) / 2;
    int u = maxsimum(a, l, m);
    int v = maxsimum(a, m, r);
    return u > v ? u : v;
}
int main()

{
    int a[] = {5, 8, 40, 30, 20, 40, 50, 10, 17, 51};
    int n = sizeof(a) / sizeof(int);

    printf("%d\n",maxsimum(a, 0, n));

    return 0;
}