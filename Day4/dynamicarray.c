#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n,i;
    printf("Enter size of array:");
    scanf("%d",&n);
    int *arr=(int*)calloc(n,sizeof(int));
    if(arr==NULL)
    {
        printf("Cannot allocate memory");
    }
    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    printf("Entered array:");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(arr+i));
    }
    printf("\nRemoving 1st element\n");
    for(i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr=realloc(arr,(n-1)*sizeof(int));
    printf("Array:");
    for(i=0;i<n-1;i++)
    {
        printf("%d ",*(arr+i));
    }

}