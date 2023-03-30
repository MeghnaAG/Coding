#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[20];
    int l,cnt=0,i;
    printf("Enter the string:");
    gets(s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]=='*')
            cnt++;
        else if(s[i]=='#')
            cnt--;
        else
        {
            printf("Invalid string");
            break;
        }
    }
    printf("Value: %d",cnt);
}
