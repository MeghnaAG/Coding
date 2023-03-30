#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i,j,temp;
    printf("Enter a 10 digit array:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    //insertion sort
    for(i=1;i<10;i++)
    {
        j=i-1;
        temp=a[i];
        if(a[j]>a[j+1])
        {
            while(j>=0)
            {
                a[j+1]=a[j];
                j--;
            }
            a[j+1]=temp;
        }
    }
    printf("Sorted array:");
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    return 0;
}
