#include <stdio.h>
void main() {
    int n;
    int a[10];
    printf("enter number of arrray : \n");
    scanf("%d",&n);
    printf("enter %d number of element :\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the numbers in order are :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("the numbers in reverse order are : \n");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
}
