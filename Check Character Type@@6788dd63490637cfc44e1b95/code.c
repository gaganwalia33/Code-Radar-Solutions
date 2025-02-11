#include<stdio.h>
int main()
{
    int ch;
    scanf("%c",&ch);
    if(ch=='A' || ch=='E'||ch=='I' || ch=='O'||ch=='U' || ch=='a'||ch=='e' || ch=='i'||ch=='o' || ch=='u' )
    {
        printf("Vowel");
    }
    else if(ch>='a' && ch<='z')
    {
    printf("consonant");
    }
    else if(ch>=1 && ch <=9)
    {
    printf("Digit");
    }
    else
    printf("Special character");
}