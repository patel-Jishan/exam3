/*Develop a Program to find the sum of a number's first and last digits.
Example:
Input: Enter any number: 384
Output: The sum of the first and the last digit: 7*/

#include<stdio.h>
int main(){
	int firstdigit,lastdigit,num,sum=0;
	printf("*enter any number*");
	scanf("%d",&num);
	lastdigit=num%10;
	while(num>=10){
		num/=10;
	}
	firstdigit=num;
	sum=lastdigit+firstdigit;
		printf("*The sum of the firstdigit and the last digits*:%d",sum);
}
