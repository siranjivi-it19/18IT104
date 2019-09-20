#include <stdio.h>
void main()
 {
    int num;
    printf("enter num:");
    scanf("%d",&num);
    printf("the factor of %d :",num);
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            printf("%d ",i);
        }
    }
 }
