#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%100==0 && n%400!=0)
    {
        printf("Not a Leap Year");
    }
    else if(n%4==0)
    {
        printf("Leap Year");
    }
    else
    printf("Not a Leap Year");
}