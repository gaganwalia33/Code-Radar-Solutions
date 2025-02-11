#include<stdio.h>
int main()
{
    int ch;
    scanf("%d",&ch);
    if(ch>=90)
    {
        printf("A");
    }
    else if(ch>=80)
    {
        printf("B");
    }
    else if(ch>=70)
    {
        printf("C");
    }
    else if(ch>=60)
    {
        printf("D");
    }
    else if(ch<60)
    {
        printf("F");
    }
}