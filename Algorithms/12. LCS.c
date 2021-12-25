#include<stdio.h>
#include<string.h>
char x[50], y[50], c[50][50], b[50][50];
int m, n, i, j;
void print(int i, int j)
{

   if(i==0||j==0)
    {
        return;
    }
    if(b[i][j]=='c')
    {
        print(i-1, j-1);
        fflush(stdout);
        printf("%c", x[i-1]);
    }
    else if(b[i][j]=='u')
    {
        print(i-1, j);
    }
    else
    {
        print(i, j-1);
    }
}
void Lcs()
{

    for(i=0; i<=m; i++)
    {
        c[0][i]=0;
    }
    for(i=0; i<=n; i++)
    {
        c[i][0]=0;
    }
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(x[i-1]==y[j-1])
            {
                c[i][j]=c[i-1][j-1]+1;
                b[i][j]='c';
            }
            else if(c[i-1][j]>=c[i][j-1])
            {
                c[i][j]=c[i-1][j];
                b[i][j]='u';
            }
            else
            {
                c[i][j]=c[i][j-1];
                b[i][j]='l';
            }
        }
    }
}

int  main()
{

    printf("Input String one: ");
    scanf("%s",x);
    printf("Input String two: ");
    scanf("%s",y);
    m=strlen(x);
    n=strlen(y);
    Lcs();
    printf("The Longest Common Subsequence is: ");
    print(m, n);
    return 0;
}
