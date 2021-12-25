#include<stdio.h>
int main()
{
    int A[20], i, n, item, low, high, mid;
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter data at array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Enter search item: ");
    scanf("%d", &item);
    low = 0;
    high = n;
    while(low<=high)
    {
        mid = ((low + high) / 2);
        if(A[mid]==item)
           {
               printf("Item is found at %d position.", mid);
               break;
           }
        else if(A[mid]>item)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if(low>high)
    {
        printf("Item is not found.");
    }
    return 0;
}
