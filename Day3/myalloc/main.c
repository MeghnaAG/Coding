#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=10;
    int *p=malloc(n);
    if(p==NULL){
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Allocated %d bytes of memory\n",n);
    printf("%p\t%p\t%p",p,p+1,p+2);
    free(p);
    return 0;
}
