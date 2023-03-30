#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[10],b[10],i;
    printf("Enter a 10 digit array:");
    gets(a);
    for(i=0;i<10;i++)
    {
        if(a[10-i-1]=='0')
            b[i]='$';
        else
            b[i]=a[10-i-1];
    }
    b[10]='\0';
    printf("%s",b);
    return 0;
}
