#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a,&b,&c);
    if(c='+')
    {
        printf("%d",a+b);
    }
    if(c=='-')
    {
        printf("%d",a-b);
    }
    if(c=='*')
    {
        printf("%d",a*b);
    }
    if(c=='/')
    {
        printf("%d",a/b);
    }
}