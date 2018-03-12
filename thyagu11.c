#include<stdio.h>
void main()
{
char str1[30],str2[40];
int i,j,flag=0;
printf("enter 2 strings");
gets(str1);
gets(str2);
for(i=0;str1[i]!='\0';i++)
{
for(j=0;str2[j]!='\0';j++)
{
if(str1[i]==str2[j])
{
flag=0;
}
else
{
flag=1;
}
}
}
if(flag==0)
{
puts(st1);
}
else
{
puts(str1);
}
}
