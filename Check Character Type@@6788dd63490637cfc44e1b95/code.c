
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
    
    else
    printf("Special character");
}