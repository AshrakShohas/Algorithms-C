#include <stdio.h>
#include<stdlib.h>
void knapsak(float w[], float v[], int n, int ca);
void main()
{
    int ca, n, flag, i;
    float w[10], v[10];
    printf("Enter Capacity: ");
    scanf("%d", &ca);
    printf("Enter items: ");
    scanf("%d", &n);
    printf("Enter weights: ");
    for(i=1; i<=n; i++)
    {
        scanf("%f", &w[i]);
    }
    printf("Enter value: ");
    for(i=1; i<=n; i++)
    {
        scanf("%f", &v[i]);
    }
    knapsak(w, v, n, ca);
}
void knapsak(float w[], float v[], int n, int ca)
{
    int i;
    float profit=0.0;
    float u[10]={0.0};
    float s[10]={0.0};
    printf("Unit values are: ");
    for(i=1; i<=n; i++)
    {
        u[i]=v[i]/w[i];
        printf(" %.2f",u[i]);
    }
    int j=1;
    while(ca>0)
    {
        if(ca>=w[j])
        {
            s[j]=w[j]/w[j];
            ca=ca-w[j];
            profit=profit+u[j]*w[j];
            j++;
        }
        else
        {
            s[j]=ca/w[j];
            profit=profit+ca*u[j];
            ca=ca-w[j]*s[j];
        }
    }
    printf("\nProfit is: %.2f", profit);
    printf("\nResults: ");
    for(i=1; i<=n; i++)
    {
        printf(" %.2f ", s[i]);
    }
}
