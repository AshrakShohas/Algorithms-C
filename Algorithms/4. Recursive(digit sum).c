#include<stdio.h>
int digit(int n)
{
    int sum = 0, s;
    while(n>0)
    {
        s = n % 10;
        sum = sum + s;
        n = n/10;
        digit(n);
    }
    return sum;
}
void main()
{
    int x, flag;
    printf("Enter the digit: ");
    scanf("%d", &x);
    flag = digit(x);
    printf("Result is: %d", flag);
}
