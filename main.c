#include <stdio.h>
#include <stdlib.h>

int isprime(int n)
{
    int i,flag=1;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}
int main()
{
    int a[10],i,sum=0,r;
    printf("Enter a 10 digit array:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    r=isprime(sum);
    if(r==1)
        printf("Sum is prime");
    else
        printf("Sum is not prime");
    return 0;
}
