#include<stdio.h>
void main()
{
int num;
printf("enter the number");
scanf("%d",&num);
if((num>1)&&(num<10))
{
printf("%d",num);
}
else
{
    printf("not in range");
}
}
