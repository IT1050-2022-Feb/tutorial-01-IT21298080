/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
 //define the variables
  int distance;  
  float amount;
//Ask user to enter the distance
  printf("Enter the distance :");   
  scanf("%d" ,&distance);
//condition
  if(distance < 30 )    
  {
    amount = (float)distance * 50;
  }

  else 
  {
    amount = (float)30 * 50 + (distance - 30) * 40;
  }
  //print amount
printf("Amount : %.2f" , amount);   
  
  return 0;//End of the programme
}
