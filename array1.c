#include <stdio.h>

int main()
{
    int n;
    int a[20];
    printf("enter a number :");
    scanf("%d",&n);
    if((n<=20)&&(n>0))
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("the given string is :\n");
        for(int i=0;i<n;i++)
        {
            printf("%d\n",a[i]);
        }
        printf("\n");
    }
    else
    {
        printf("the number is greater than 20");
    }
    return 0;
}

