#include<stdio.h>
void main()
{
	char str[10];
	int i;
	int c1=0,c2=0,c3=0,c4=0;
	printf("enter the string\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			c1++;
		}
		else if(str[i]>=97 && str[i]<=122)
		{
			c2++;
		}
		else if(str[i]>=48 && str[i]<=57)
		{
			c3++;
		}
		else{
			c4++;
		}
		
	}
	printf(" upper cASE=%d\n",c1);
	printf(" lower cASE=%d\n",c2);
	printf(" digit cASE=%d\n",c3);
	printf(" special cASE=%d\n",c4);
	
}
