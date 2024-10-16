#include<stdio.h>
void main()
{
	int i;
	int c1=0;
	int c2=0;
	char str[10];
	printf("enter the string\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		c1++;
		if(str[i]=' ')
		{
			c2++;
		}
	}
	printf(" character=%d\n",c1);
	printf("words=%d\n",c2);
}
