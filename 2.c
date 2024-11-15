/*Develop a Program to count the total number of digits in a number.
Example:
Input: Enter any number: 752*/
#include<stdio.h>
int main(){
	int number,count=0;
	printf("*enter any number*:");
	scanf("%d",&number);
	while(number>0){
		number/=10;
		count++;
		
	}
	printf("Total number of digits is:%d\n",count);
}
