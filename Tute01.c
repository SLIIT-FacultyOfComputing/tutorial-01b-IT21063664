/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main()
{
  int mark1 , mark2 , tot  ;
  float avg ; 

  //Getting inputs
  printf("Enter Mark 1 : ");
  scanf("%d" ,&mark1 );

  printf("Enter Mark 2 : ");
  scanf("%d" , &mark2 );

  //Calculate average
  tot = mark1 + mark2 ;
  avg = tot / 2.0 ;

  //print average
  printf("Average of two subjects : %.2f" , avg );

  return 0 ; 

}
