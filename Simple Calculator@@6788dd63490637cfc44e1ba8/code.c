#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    scanf("%c",&a,&b,&c);
    if(c=='+')
    {
        printf("%d",a+b);
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