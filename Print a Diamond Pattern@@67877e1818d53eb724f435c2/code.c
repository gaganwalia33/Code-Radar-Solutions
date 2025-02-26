#include<stdio.h>
int main()
{
    int i,n,j,k=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++,k=0)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        while(k!=2*i-1)
        {
            printf("*");
            k++;
        }
        printf("\n");
    }
     for(i=n;i>=1;i--,k=0)
    {
        for(j=n-i;j>=1;j--)
        {
            printf(" ");
        }
        while(k!=2*i-1)
        {
            printf("*");
            k++;
        }
        printf("\n");
    }
}