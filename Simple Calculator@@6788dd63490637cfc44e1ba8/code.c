#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    scanf("%d",&a,&b,&c);
    if(c=='+')
    {
        d=a+b;
        printf("%d",d);
    }
    if(c='-')
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