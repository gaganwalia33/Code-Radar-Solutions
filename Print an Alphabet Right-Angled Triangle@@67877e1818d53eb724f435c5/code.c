#include<stdio.h>
int main()
{
    int i,j;
    char n;
    scanf("%c",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
}