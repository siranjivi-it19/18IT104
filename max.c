#include <stdio.h>
int main() {
    int a[5][5];
    int r,c;
    int temp=0,sum=0;
    printf("enter no of rows in matrix :");
    scanf("%d",&r);
    printf("enter no of columns in matrix :");
    scanf("%d",&c);
    sum =r*c;
    printf("\nenter the %d elements of %d by %d matrix :\n",sum,r,c);
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the matrix is:\n");
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
           printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            if(a[i][j]>temp)
            {
                temp=a[i][j];
            }
        }
    }
    printf("the greatest number is : %d",temp);
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            if(a[i][j]<temp)
            {
                temp=a[i][j];
            }
        }
    }
    printf("\nthe smallest number is : %d",temp);
    return 0;
}
