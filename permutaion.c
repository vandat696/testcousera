#include<stdio.h>

void solve(int a[], int check[], int n, int depth)
{
    if (depth == n)
    {
        for (int i=0; i<n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
        return;
    }

    for (int i = 1; i<=n; i++)
    {
        if ( check[i] == 0 )
        {
            a[depth] = i;
            check[i] = 1;
            solve(a, check, n, depth + 1);
            check[i] = 0;
        }
        
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int check[1000] = {0};
    int a[n];

    solve(a, check, n, 0);
}