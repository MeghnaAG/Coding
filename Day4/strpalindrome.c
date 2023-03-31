#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    int l,i,flag=0;
    printf("Enter a string:");
    gets(str);
    l=strlen(str);
    for(i=0;i<l/2;i++)
    {
        if(str[i]!=str[l-i-1])
        {
            printf("Not a palindrome");
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("String is palindrome");
}