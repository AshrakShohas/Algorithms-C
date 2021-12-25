#include<stdio.h>
int main()
{
    int C[50], n, i, value, count=0;
    //printf("Enter the value of n: ");
    scanf("%d",&n);
    //printf("Enter the value of array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&C[i]);
    }
    printf("Enter the value you want to change: ");
    scanf("%d",&value);
    while(value>0)
    {
        for(i=n-1; i>=0; i--)
        {
            if(value>=C[i])
            {
                count = value/C[i];
                printf("\n %d taka coin %d piece.\n", C[i], count);
                value=value%C[i];
                count =count+1;
            }
        }
    }
    return 0;
}
