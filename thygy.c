#include <stdio.h>
 int main()
 {
   int i,spaces;
   char a[100];
   printf("enter the string\n");
   scanf("%s",a);
   for(i=0 ; a[i]!='\0' ; i++)
     {
       if (a[i]==' ')
     {
     spaces++;
     }
     }
   printf("the no. of spaces in the string is %d\n",spaces);
   printf("the no. of words in the string is %d\n",spaces+1);
 }
