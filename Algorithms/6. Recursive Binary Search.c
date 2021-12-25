#include<stdio.h>

int rbs(int A[], int low, int high,  int item)
{
    while(low<=high)
    {
        int mid = ((low+high)/2);
        if(A[mid]==item)
        {
            return mid;
        }
        else if(A[mid]>item)
        {
            high = mid-1;
            return rbs(A, low, high, item);
        }
        else
        {
            low = mid +1;
            return rbs(A, low, high, item);
        }
    }
    if(low>=high)
    {
        return -1;
    }
}

int main()
{
    int A[10], low, high, mid, item , n, i, flag;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the data at array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Enter the item to search: ");
    scanf("%d", &item);
    low = 0;
    high = n;
    flag = rbs(A, low, high, item);
    if(flag==-1)
    {
        printf("Item is not Found.");
    }
    else
    {
        printf("Item is found at %d position.", flag);
    }
    return 0;
}

