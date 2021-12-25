#include<stdio.h>
int main()
{
    int A[10], item, i, n, count=0;
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter data at array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Enter value of item to find frequency: ");
    scanf("%d", &item);
    for(i=0; i<n; i++)
    {
        if(A[i]==item)
        {
            count++;
        }
    }
    if(count>0)
    {
        printf("Frequency of item is: %d", count);
    }
    else
    {
        printf("Item is not found.");
    }
    return 0;
}
