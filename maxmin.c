#include <stdio.h>
void main() {
    int a[5]={4,5,3,1,2};
    int mx = a[0];
    int mn = a[0];
    for(int i=1; i<5; i++)
    {
        if(a[i]>mx)
        {
            mx = a[i];
        }
        if(a[i]<mn)
        {
            mn = a[i];
        }
    }
    printf("Maximum element is : %d\n", mx);
    printf("Minimum element is : %d\n\n", mn);
}
