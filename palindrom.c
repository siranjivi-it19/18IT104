#include <stdio.h>

int main()
{
   char string[20];
   int i, length;
   int num = 0;
   printf("Enter a string:");
   scanf("%s", string);
   length = strlen(string);
   for(i=0;i < length ;i++)
   {
     if(string[i] != string[length-i-1])
     {
          num = 1;
          break;
     }
   }
   if (num)
   {
       printf("%s is not a palindrome", string);
   }
   else
   {
       printf("%s is a palindrome", string);
   }
   return 0;
}
