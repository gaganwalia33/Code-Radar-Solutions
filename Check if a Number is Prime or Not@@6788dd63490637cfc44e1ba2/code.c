#include<stdio.h>
int main()
{
    int a,b=0,i;
    scanf("%d",&a);
    for(i=1;i<=a/2;i++)
    {
        if(a%i==0)
        b=0;
    }
    else
    b=1;
    if(b==1)
    {
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}