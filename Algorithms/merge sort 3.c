#include<stdio.h>
int main()
{
	int a[20],i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
	mergeSort(a, 1,n );

	for(i=1;i<=n;i++)
    {
       printf("%d ",a[i]);
    }

	return 0;
}



void mergeSort(int a[], int p, int r)
{
    int m;
	if (p < r)
	{

        m = p+(r-p)/2;
		mergeSort(a, p, m);
		mergeSort(a, m+1, r);
		merge(a, p, m, r);
	}
}
void merge(int a[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;


	int L[n1], R[n2];


	for (i = 0; i < n1; i++)
		L[i] = a[l + i];
	for (j = 0; j < n2; j++)
		R[j] = a[m + 1+ j];


	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			a[k] = L[i];
			i++;
		}
		else
		{
			a[k] = R[j];
			j++;
		}
		k++;
	}


	while (i < n1)
	{
		a[k] = L[i];
		i++;
		k++;
	}


	while (j < n2)
	{
		a[k] = R[j];
		j++;
		k++;
	}
}

