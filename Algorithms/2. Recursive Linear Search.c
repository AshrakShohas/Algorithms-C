#include<stdio.h>
#include<stdlib.h>
int rls(int A[10], int i, int n, int item)
{
    if(i>=n)
    {
        return -1;
    }
    else if(A[i]==item)
    {
        printf("Item is found at %d position.", i);
        return i;
       exit(0);
    }
    else
    {
        return rls(A, i+1, n, item);
    }
}
int main()
{
    int A[10],i, n, item, j=0, flag;
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter data at array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Enter search item: ");
    scanf("%d", &item);
    flag=rls(A, j, n, item);
    if(flag == -1)
    {
        printf("Item is not found.");
    }
    return 0;
}
