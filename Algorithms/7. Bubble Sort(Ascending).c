#include<stdio.h>
int main()
{
    int A[50], i, j, n, swap;
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter data at array: ");
    for(i=1; i<=n; i++)
    {
        scanf("%d", &A[i]);
    }
    for(i=1; i<=n-1; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            if(A[j]>A[j+1])
            {
                swap = A[j];
                A[j] = A[j+1];
                A[j+1] = swap;
            }
        }
    }
    printf("Ascending data is: ");
    for(i=1; i<=n; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}
