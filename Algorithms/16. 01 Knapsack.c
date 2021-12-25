#include<stdio.h>
void Iterative01knapsack(int n, int m);
void print_result ( int n, int m);
int n,m,v[10],w[10],r[5][7];
void main()
{
	int i;
	printf("Enter number of Item n:=");
		scanf("%d",&n);
	printf("Enter Knapsack cappacity m:=");
		scanf("%d",&m);
for(i=1;i<=n;i++)
	{
		printf("Enter weights of %d item:=",i);
		scanf("%d",&w[i]);
	}
	for(i=1;i<=n;i++)
	{
		printf("Enter total values of %d item:=",i);
		scanf("%d",&v[i]);
	}
	Iterative01knapsack(n, m);
	print_result (n, m);
}
void Iterative01knapsack(int n, int m)
{
    int i,j,temp,temp1;
      for(i=0;i<=n;i++)
{
             r[i][0]=0;
}
      for(i=1;i<=m;i++)
{
             r[0][i]=0;
}
      for(i=1;i<=n;i++)
       {
            for(j=1;j<=m;j++)
	         {
                  if(w[i]>j)
	         {
                       r[i][j]=r[i-1][j];
	         }
                       else
		               {
			  temp=r[i-1][j];
			  temp1=v[i]+r[i-1][j-w[i]];
			  if(temp>temp1)
			  {
                                            r[i][j]=temp;
			  }
			  else
			  {
			         r[i][j]=temp1;
			  }
          }
	   }
    }

}
void print_result ( int n, int m)
{
	int i,j;
	i=n;
	j=m;
while( i!=0 && j!=0)
{
	if(r[i][j]!=r[i-1][j])
	{
		printf(" \nItem %d taken as %d",i,r[i][j]);
                        i=i-1;
                        j=j-w[i];
	}
	else
	{
	printf("\nItem %d not taken", i);
                     i=i-1;
	}
}
printf("\n");
}
