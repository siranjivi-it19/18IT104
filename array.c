#include <stdio.h>
int main() {
    int n,max,min;
    int a[20];
    printf("enter a number:");
    scanf("%d",&n);
    if((n<=20)&&(n>0))
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("the normal values are :");
        for(int i=0;i<n;i++)
        {
            printf("\n%d\n",a[i]);
        }
        printf("the reverse values are :");
        for(int i=n-1;i>=0;i--)
        {
            printf("\n%d\n",a[i]);
        }
        max=a[0];
        min=a[0];
        int i;
        for(i=0;i<n;i++)
        {
          if(max<a[i])
          {
            max=a[i];
          }
          if(min>a[i])
            {
                min=a[i];
            }
        }
        printf("the maximum number is : %d\n ", max);
        printf("the minimum value is : %d\n",min);
    }
    else
    {
        printf("the number is invaild :");
    }
    return 0;
}
