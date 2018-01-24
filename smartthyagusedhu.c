#include <stdio.h>
void main()
{
    int num,count=0;
    printf("Enter an number is: ");
    scanf("%d", &num);
    while(num != 0)
    {
        num /= 10;
        ++count;
    }
    printf("Number of digits: %d", count);
return0;
}
