#include<stdio.h>
int main()
{
    int n,i,j,k=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++,k=0)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        while(k!=2*i-1)
        {
            printf("%d ",j);
            k++;
        }
        printf("\n");
    }
}