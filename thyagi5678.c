#include<stdio.h> 
int convert_to_minutes(int h, int m)
{
      int total_minutes;
      total_minutes = (h * 60) + m;
      return total_minutes;
} 
int main()
{
      int hours, minutes, total_minutes;
      printf("\nEnter the Time in Hours and Minutes:\n");
      printf("\nHours:\t");
      scanf("%d", &hours);
      printf("\nMinutes:\t");
      scanf("%d", &minutes);
      total_minutes = convert_to_minutes(hours, minutes);
      printf("\nTotal Time in Minutes:\t%d\n", total_minutes);  
}
