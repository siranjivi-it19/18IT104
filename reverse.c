#include<stdio.h>
void main() {
  char a[10];
  int len;
  printf("enter the string:");
  scanf("%s",a);
  printf("the normal string is :");
  int i;
  for(i=0;a[i]!='\0';i++)
  {
      printf(" %c",a[i]);
  }
  
  len=i-1;
  printf("\n the reversed string is:");
  for(i=len;i>=0;i--)
  {
      printf(" %c",a[i]);
  }
}
