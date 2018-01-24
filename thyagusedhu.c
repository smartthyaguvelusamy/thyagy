#include <stdio.h>
 
void main()
{
    int num1, num2, num3; 
    printf("Enter the values of number1, number2 and number3\n");
    scanf("%d %d %d", &number1, &number2, &number3);
    printf("num1 = %d\tnum2 = %d\tnum3 = %d\n", num1, num2, num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("number1 is the greatest among three \n");
        }
        else
        {
            printf("number3 is the greatest among three \n");
        }
    }
    else if (num2 > num3)
        printf("num2 is the greatest among three \n");
    else
        printf("num3 is the greatest among three \n");
        return0;
}
