#include<stdio.h>
int main()
{
    int ch;
    scanf("%d",&ch);
    if(ch>=90)
    {
        printf("A");
    }
    else if(80<=ch<90)
    {
        printf("B");
    }
    if(70<=ch<80)
    {
        printf("C");
    }
    if(60<=ch<70)
    {
        printf("D");
    }
    if(ch<60)
    {
        printf("F");
    }
}