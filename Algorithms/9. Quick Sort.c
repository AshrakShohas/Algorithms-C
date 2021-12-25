#include <stdio.h>
void QSort(int A[], int f, int n)
{
    if(n>f)
    {
        int s, i, j, temp;
        i=f+1;
        j=n;
        while(i<=j)
        {
            while(A[f]>A[i])
            {
                i=i+1;
            }
            while(A[j]>A[f])
            {
                j=j-1;
            }
           if(i<=j){
            s=A[i];
            A[i]=A[j];
            A[j]=s;
            i=i+1;
           }
        }
        temp=A[f];
        A[f]=A[j];
        A[j]=temp;
        QSort(A, f, j-1);
        QSort(A, j+1, n);
    }
}
int main()
{
    int A[50], i, f=1, n;
    fflush(stdout);
    printf("Enter the value of n: ");
    fflush(stdout);
    scanf("%d", &n);
    printf("Enter the value of array: ");
    for(i=1; i<=n; i++)
    {
        fflush(stdout);
        scanf("%d", &A[i]);
    }
    QSort(A, f, n);
    printf("Sorted array is: ");
    for(i=1; i<=n; i++)
    {
        fflush(stdout);
        printf("%d ", A[i]);
    }
    return 0;
}
