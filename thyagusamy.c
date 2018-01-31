
#include <stdio.h>
#include <math.h>
int main()
{
    int number,Num, remainder, result = 0, n = 0 ;
    printf("Enter an number: ");
    scanf("%d", &number);
    Num = number;    
    while (Num!= 0)
    {
        Num /= 10;
        ++n;
    }
    Num = number;
    while (Number != 0)
    {
        remainder = Num%10;
        result += pow(remainder, n);
        Num/= 10;
    }
    if(result == number)
        printf("%d is an Armstrong number.", number);
    else
      printf("%d is not an Armstrong number.", number);
    return 0;
}
