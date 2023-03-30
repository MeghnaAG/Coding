#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int i;
    int *numbers=(int*)malloc(4*sizeof(int));
    numbers[0]=1;
    numbers[1]=2;
    numbers[2]=3;
    //numbers[3]=4;
    printf("Stored integers are:\n");
    for(i=0;i<4;i++)
    {
        printf("Number %d=%d\n",i,numbers[i]);
    }
    free(numbers);
    return 0;
}
