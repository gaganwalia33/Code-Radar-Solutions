#include<stdio.h>
int main()
{
    int i,n,j,k=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++,k=0)
    {
        for(j=1;j<=n-1;j++)
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