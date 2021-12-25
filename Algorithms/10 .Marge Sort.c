#include <stdio.h>
void MSort(int A[],int low,int high);
void Merge(int A[],int low,int mid,int high);
void main( )
{
	int A[50], n, i, low, high;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	printf("Enter the value of array: ");
	for(i=1; i<=n; i++)
    {
        scanf("%d", &A[i]);
    }
	low=1;
	high=n;
	MSort(A,low,high);
	printf("Sorted:");
	for(i=1;i<=n;i++)
	{
		printf(" %d",A[i]);
	}
}
void MSort(int A[],int low,int high)
{
    int mid;
	if(high>low)
    {
        mid=(low+high)/2;
		MSort(A,low,mid);
		MSort(A,mid+1,high);
		Merge(A,low,mid,high);
    }
}
void Merge(int A[],int low,int mid,int high)
{
    int B[50], i=low, j=mid+1, k=low, p;
    while((i<=mid)&&(j<=high))
    {
        if(A[j]<A[i])
        {
            B[k]=A[j];
		    j=j+1;
		    k=k+1;
        }
        else
        {
            B[k]=A[i];
		    i=i+1;
		    k=k+1;
        }
    }
    if(j>high)
    {
        for(p=i;p<=mid;p++)
        {
            B[k]=A[p];
			k=k+1;
        }
    }
    if(i>mid)
    {
		for(p=j; p<=high; p++)
        {
			B[k]=A[p];
			k=k+1;
        }
    }
    for(p=low; p<=high; p++)
    {
		A[p]=B[p];
    }
}
