#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,sum;
    a=100,b=200;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    sum=*p2/ *p1;
    printf("%d",sum);
    return 0;
}
