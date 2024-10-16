// reverse the string using recursion
#include<stdio.h>

void reverse();
void main()
{
	printf("enter the strng");
	reverse();
}
void reverse()
{
	char c;
	scanf("%c",&c);
	if(c!='\n')
	{
		reverse();
		printf("%c",c);
	}
}
