/*Q.1 Alphabet Skipper
Develop a program that prints all alphabets from ‘a’ to ‘z’ by skipping 3 alphabets using a
do-while loop.
Example:
Output: a, e, i, m, q, u, y*/
#include<stdio.h>
int main (){
	int skip;
	char alphabets= 'a';
	printf("Enter skip value");
	scanf("%d",&skip);
	skip=3;
	printf("output is:");
	do {
		printf(",%c",alphabets);
		alphabets+=skip+1;
	}
	while(alphabets<='z');
}
