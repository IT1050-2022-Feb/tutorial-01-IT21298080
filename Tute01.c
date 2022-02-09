/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
 //Creat Variables
int mark01 , mark02;
float avg;
	//Getting User Inputs
	printf("Enter the first mark :");
  //letting user to input mark01
	scanf("%d" , &mark01);
	
	printf("Enter the second mark :");
	scanf("%d" , &mark02);

	//Calculate
	avg = (float)(mark01 + mark02)/2;
	//Printing outputs
	printf("Average : %.2f" , avg);


  return 0;//End of the Function
}

