#include<stdio.h>
int main()
{
	int hour,minute,h,m,h1,m1;
	scanf("%d %d",&hour,&minute);
	scanf("%d %d",&h,&m);
	if(hour!=0)
	{
		h1=hour-h;
		m1=minute-m;
		printf("%d %d",h1,m1);
	}
	return 0;
}
