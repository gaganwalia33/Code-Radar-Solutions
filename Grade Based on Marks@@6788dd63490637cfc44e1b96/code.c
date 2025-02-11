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
    else if(70<=ch<80)
    {
        printf("C");
    }
    else if(60<=ch<70)
    {
        printf("D");
    }
    else if(ch<60)
    {
        printf("F");
    }
}