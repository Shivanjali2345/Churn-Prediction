/*#include<stdio.h>
#include<string.h>
void main()
{
	int i;
	int c=0;
	char str[8];
	printf("enter the string");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		c++;
	}
	printf("\nlength%d",c);
}
*/
//count the upper case lower case and special symbol
/*#include<stdio.h>
#include<string.h>
void main()
{
	int i;
	int c1=0,c2=0,c3=0,c4=0;
	char str[8];
	printf("enter the string");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			c1++;
		}
		else if(str[i]>='a' && str[i]<='z')
		{
			c2++;
		}
	   else if(str[i]>='0' && str[i]<='9')
		{
			c3++;
		}
		else{
			c4++;
		}
		printf("%d\n %d\n %d\n %d\n",c1,c2,c3,c4);
}
}*/
//count the number of character and words in the string 
/*#include<stdio.h>
#include<string.h>
void main()
{
	char str[10];
	int i;
	int c1=0;
	int c2=0;
	printf("enter the string");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		c1++;
	}
	if(str[i]=' ')
	{
		c2++;
	}
	printf("%d\n",c1);
	printf("%d\n",c2);
}
*/
//copy the one string into another string
/*#include<stdio.h>
#include<string.h>
void main()
{
	char s1[10],s2[56];
	int i;
	printf("enter the string");
	gets(s1);
	for(i=0;s1[i]!='\0';i++)
	{
		s2[i]=s1[i];
	}
	s2[i]='\0';
	printf("%s",s2);
	
}*/
//convert the string upper case to lower case and lower case to upper case
/*#include<stdio.h>
#include<string.h>
void main()
{
	char s1[10];
	int i;
	printf("enter the string");
	gets(s1);
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>=65 && s1[i]<=90)
		{
			s1[i]=s1[i]+32;
		}
		else{
			s1[i]=s1[i]-32;
		}
	}
	printf("%sresult",s1);
}
*/
//program to read a string and count vowels and consonants
/*#include<stdio.h>
#include<string.h>
void main()
{
	char str[10];
	int i;
	int c1=0;
	int c2=0;
	printf("enter the string");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'|| str[i]=='e'||str[i]=='i'|| str[i]=='o'||str[i]=='u')
		{
			c1++;
		}
		else{
			c2++;
		}
		
	}
	printf("%d %d",c1,c2);
}
*/
//progeam to read a string and print ascii value of each character
/*#include<stdio.h>
#include<string.h>
void main()
{
	char str[10];
	int i;
	printf("enter the string");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		printf("\n%c=%d",str[i],str[i]);
	}
}*/
// to reverse the string
/*#include<stdio.h>
#include<string.h>
void main()
{
	char str[12];
	int i;
	int c=0;
	printf("enter the string");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		c++;
	}
	printf("\n to reverse the string");
	for(i=c-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}	
}
*/
//string concatination in c lang
/*#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,c=0;
	char s1[12],s2[78];
	printf("enter the  1 string");
	gets(s1);
	printf("enter the  2 string");
	gets(s2);
	for(i=0;s1[i]!='\0';i++)
	{
		c++;
	}
	for(i=c,j=0;s2[j]!='\0';i++,j++)
	{
		s1[i]=s2[j];
	}
	s1[i]='\0';
	printf("\n con string %s",s1);
}*/
//string comparison
/*#include<stdio.h>
#include<string.h>
void main()
{
	char s1[10],s2[10];
	int i;
	int f=0;
	printf("enter the string");
	gets(s1);
	printf("sreing 2");
	gets(s2);
	for(i=0;s1[i]!='\0' || s2[i]!='\0';i++)
	{
		if(s1[i]!=s2[i])
		{
			f=1;
			break;
		}
		
	}
	if(f==0)
	{
		printf("\n string are equal");
		
	}
	else{
		printf("\n not");
	}
}
*/
//count the frequency of character
/*#include<stdio.h>
#include<string.h>
void main()
{
	int i;
	char str[12];
	int n;
	int c=0;
	printf("enter the string");
	gets(str);
	printf("\n enter the character you enter ");
	scanf("%c",&n);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==n)
		{
			c++;
		}
		printf("\n total=%d",c);
	}
}*/
//search whether the character is present or not
/*#include<stdio.h>
#include<string.h>
void main()
{
	int i;
	int f=0;
	int n;
	char str[10];
	printf("enter the string");
	gets(str);
	scanf("%c",&n);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==n)
		{
			f=1;
			break;
		}
	
	}
		if(f==1)
		{
			printf("\n charactr is present in string");
		}
		else{
			printf("not");
		}
}*/

//count the words in the string
/*#include<stdio.h>
#include<string.h>
void main()
{
	int i;
	char str[13];
	int c1=0;
	printf("enter the string");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=' ')
		{
			c1++;
		}
	}
	printf("\n words %d",c1+1);
	
}*/
//count number of spaces in the sring
/*#include<stdio.h>
#include<string.h>
void main()
{
	char str[10];
	int i;
	int c1=0;
	printf("enter the string");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=' ')
		{
			c1++;
		}
	}
		printf("\n space =%d",c1);
	
}*/

// reverse the string using recursion
/*#include<stdio.h>

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
8/
/*#include<stdio.h>
int fib(int);
int main()
{
	int n,i,f;
	printf("enter the value of");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		f=fib(i);
		printf("\n%d",f);
	}
}
int fib(int n)
{
	if(n==0)
	
		return 0;
	
	else
		if(n==1)
		
			return 1;
		
	
	else
		return fib(n-1)+fib(n-2);
	
}*/
//reverse the number
/*#include<stdio.h>
int rev(int ,int);
int main()
{
	int num=123;
	int rev=0;
	rev=reverse(num,rev);
	printf("%d",rev);
	
}
int reverse(int num,int rev )
{
	if(num==0)
	{
		return rev;
		rev=(rev*10)+num%10;
		reverse(num/10,rev);
	}
}*/
