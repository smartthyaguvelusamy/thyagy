#include <stdio.h>
int main()
{
    int n, num= 0, remainder, integer;
    printf("Enter an integer: ");
    scanf("%d", &n);
    Integer = n;
       while( n!=0 )
    {
        remainder = n%10;
        num = num*10 + remainder;
        n /= 10;
    }
       if (Integer == num)
        printf("%d is a palindrome.", Integer);
    else
        printf("%d is not a palindrome.", Integer);
        return 0;
}
