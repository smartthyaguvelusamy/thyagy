#include<stdio.h>
void main()
{
char str1[30],str2[40];
int i,j;
printf("enter 2 strings");
gets(str1);
gets(str2);
while(str1[i]!='\0')
{
    i++;
    
}
while(str2[j]!='\0')
{
    str1[i]=str2[j];
    i++;
    j++;

}

puts(str1);
}
