/* Exerrcise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int s1,s2;
  float avg;

  printf("enter marks for subject 01 : ");
  scanf("%d", &s1);
  printf("enter marks for subject 02 : ");
  scanf("%d", &s2);

  avg =(s1 + s2)/2.0;

  printf("Average marks : %.2f", avg);
  
  return 0;
}

