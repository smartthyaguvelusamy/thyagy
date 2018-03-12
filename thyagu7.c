#nclude<stdio.h>
void main()
{
int num,c=0,n1;
printf("enter the number");
scanf("%d",&n);
while(num>0)
{
n1=num%10;
c++;
num=n/10;
}
printf("%d",c);
}
