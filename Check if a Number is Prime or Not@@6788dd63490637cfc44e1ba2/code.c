#include<stdio.h>
int main()
{
    int a,b=0,i;
    scanf("%d",&a);
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
        
        b=1;

    }
    if(b==0)
    {
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}