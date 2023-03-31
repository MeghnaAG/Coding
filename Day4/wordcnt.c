#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    int l,i,cnt=0;
    printf("Enter a string:");
    gets(str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]==' ')
        {
            if(str[i+1]!=' ' && str[i+1]!='\0')
                cnt++;
        }
    }
    printf("No of words: %d",cnt+1);
}