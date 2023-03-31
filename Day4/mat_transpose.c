#include <stdio.h>
#include <stdlib.h>
#define MAX 20
int r,c;
struct Tuple
{
    int row;
    int col;
    int value;
};
struct Tuple t1[MAX],tran1[MAX];
void transpose(struct Tuple t[],struct Tuple tran[]);

void  display(struct Tuple t[]);
int main()
{
    int i,j,r1,r2,c1,c2;
    int a[10][10],b[10][10];
    printf("Enter the no. of rows and columns of matrix:");
    scanf("%d %d",&r1,&c1);
    printf("Enter matrix :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
             scanf("%d",&a[i][j]);
             /*if(a[i][j]!=0)
                n1++;*/
        }
    }
    
    transpose(t1,tran1);
    printf("Transpose :\n");
    display(tran1);
}
void transpose(struct Tuple t[MAX],struct Tuple tran[MAX])
{
    int n,i,j,k=1;
    n=t[0].value;
    tran[0].row=t[0].col;
    tran[0].col=t[0].row;
    tran[0].value=n;
    for(i=0;i<t[0].col;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(t[j].col==i)
            {
                tran[k].row=t[j].col;
                tran[k].col=t[j].row;
                tran[k].value=t[j].value;
                k++;
            }
        }
    }
}

void display(struct Tuple t[30])
{
    int i;
    for(i=0;i<=t[0].value;i++)
    {
       printf("%d\t%d\t%d",t[i].row,t[i].col,t[i].value);
       printf("\n");
    }
}