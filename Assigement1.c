/*Check if the given number is even or odd.*/
/*#include<stdio.h>
void main()
{
	int num=23;
	printf("to print the  given number  is an even or odd:\n");
	if(num%2==0)
	{
		printf("the given number is even%d\n:",num);
		
	}
	else{
		printf("%d\nnumber is odd",num);
	}
}
*//*Finding F from C (temp).*/
/*#include<stdio.h>
void main()
{
  int c=35;
  int f;
  f=c*(1.8)+32;
  printf("%d",f);	
}
/*Accept a 3 digit number from user and find the sum of the digits and also 
reverse the number*/
/*#include<stdio.h>
void main()
{
	int a=20;
	int b=30;
	int c=59;
	int sum;
	int q1,r1,r2,q2;
	int rev=0;
	sum=a+b+c;
	printf("%d\n sum is:",sum);
	printf("to reverse the given number:\n");
	r1=sum%10;
	q1=sum/10;
	rev=rev*10+r1;
	r2=q1%10;
	q2=q1/10;
	rev=rev*10+r2;
	rev=rev*10+q2;
	printf("to revese the given number:%d\n",rev);
	
}
*//*Write a program to check if person is eligible to marry or not (male age >=21 
and female age>=18).*/
/*#include<stdio.h>
void main()
{
	int person;
	int female_age=23;
	int male_age=12;
	if(male_age>=21)
	{
		printf(" %d male is eligible to marry:",male_age);
		
	}
	else{
		printf("%d male is  not eligible to marry:",male_age);
	}
	if(female_age>=18)
	{
		printf("%d female is eligible to marry:",female_age);
	}
	else{
		printf("%d female is  not eligible to marry:",female_age);
	}
}
*/
/*Calculating total salary based on basic. If basic <=5000 da, ta and hra will be 
10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 
30% respectively.*/
/*#include<stdio.h>
void main()
{
	int basic=6000;
	int total_salary;
	int da,ta,hra;
	if(basic<=5000)
	{
		da=(basic*10)/100;
		ta=(basic*20)/100;
		hra=(basic*25)/100;
	}
	else{
		da=(basic*15)/100;
		ta=(basic*25)/100;
		hra=(basic*30)/100;
	}
	total_salary=da+ta+hra;
	printf("%d total salary",total_salary);
}
*/
/*Finding area and perimeter of rectangle or circle.*/
#include<stdio.h>
void main()
{
	int l=70,w=20;
	int r=15;
	int area,perimeter,area1,perimeter1;
	area=l*w;
	perimeter=2*(l+w);
	area1=3.14*2*r;
	printf("%d\n%d\n%d\n%d\n",area,perimeter,area1,perimeter1);
}
    

	
	
	




