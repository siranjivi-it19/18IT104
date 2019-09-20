#include<stdio.h>
void main()
{
int num,a;
printf("enter the number :");
scanf("%d",&num);
for(int i=1;i<=20;i++)
{
a=num*i;
printf("%d*%d=%d\n ",i,num,a);
}
}
