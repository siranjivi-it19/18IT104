#include <stdio.h>
int main() {
    int a[5][5];
    int sum=0;
    int n;
    printf("enter a square matrix order:");
    scanf("%d",&n);
    printf("\nenter the %d square matrix elements:\n",n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the matrix is:\n");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
           printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i]==a[j])
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("the sum of diagonal elements is %d",sum);
    
    return 0;
}
