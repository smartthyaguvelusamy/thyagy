# include <stdio.h> 
# include <conio.h>
void main() 
{ 
 int i, num, d ; 
 clrscr() ; 
 printf("Enter the limit : ") ; 
 scanf("%d", &num) ; 
 printf("\nEnter the number : ") ; 
 scanf("%d", &d) ; 
 printf("\nThe numbers divisible by %d are :\n\n", d) ; 
 for(i = 1 ; i <= num ; i++) 
  if(i % d == 0) 
   printf("%d\t", i) ; 
 getch() ; 
}

