//2*write a program to find greatest of three numbers using nested if-else*/
/*#include<stdio.h>
void main()
{
	int a=20;
	int b=30;
	int c=50;
	if(a>b)
	{
		if(a>c)
		{
			printf("a is greater:%d\n",a);
		}
		else{
			printf("c is greater:%d\n",c);
			
		}
	}
	else{
		if(b>c)
		{
			printf("b is greater:%d\n",b);
		}
		else{
			printf("c is greater:%d\n",c);
		}
	}
}
*//*3. Accept two numbers from user and an operator (+,-,/,*,%) based on that
perform the desiredoperations.*/
/*#include<stdio.h>
int  main()
{
	int a=100,b=67;
	int ans;
	char choice='+';
	if(choice== '+')
	{
		ans=a+b;
		
	}
	else if(choice== '-')
	{
		ans=a-b;
	}
	else if(choice== '*')
	{
		ans=a*b;
	}
	else if(choice== '/')
	{
		ans=a/b;
	}
	else
	{
		ans=a%b;
	}
		printf("%d\n",ans);
	
	}
	*/
	
	
	/*4. Display a menu to the user (like 1.Even Odd 2. Basic salary etc), ask the user to
enter his choice,then based on that perform the desired operations.*/
/*#include<stdio.h>
void main()
{
	int choice=1;
	int choice=2;
	int num=1;
	int basic_salary=30000;
	int basic_salary1=40000;
	if(choice==1)
	{
		if(num%2==0)
		{
			printf("number is even");
		}
		else 
		{
			printf("number is odd");
		}
		
	}
	else if(choice==2)
	{
		printf("basic salary");
	}	
	else{
		printf("invalid choice");
	}
}
*/
		
	
1./*find the price of item when discount is given specify different discount based on price*/
void main()
{
	int dis,original_price,price=10000;
	if(price>=5000)
	{
		dis=price*0.35;
	}
	else if(price>=8000)
	{
		dis=price*0.45;
	}
	else if(price>=10000)
	{
		dis=price*0.55;
	}
		 original_price=price+dis;
		printf("originalprice is %d",original_price);
		
	
}
5/*Accept the price from user. Ask the user if he is a student (user may say yes or 
no). If he is a student and he has purchased more than 500 than discount is 20%
otherwise discount is 10%.But if he is not a student then if he has purchased 
more than 600 discount is 15% otherwise there is not discount.*/
/*void main()
{
	int price=100;
	char choice='s';
	if(choice=='s')
	{
		if(price>500)
		{
			price=price*0.2;
		}
		else
		{
			
			price=price-(price*0.1);
		}
	}
	else
	{
		if(price>600)
		  {
			 	
				price=price-(price*0.15);
		  }
		  else
		  {
				price=price;
		  }
			
	}
		printf("%d\n",price);
	}
	*/

	

