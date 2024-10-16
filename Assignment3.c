/*1****print the number from 1 to 10 using while and for loop*/
/*#include<stdio.h>
int main()
{
	int i=1;
	while(i<=10)
	{
		printf("%d\n",i++);
	}
}
*/
/*int main()
{
	int i=1;
	for(i=1;i<=10;i++)
	{
		printf("%d\n",i);
	}
}
*/
/*2** print the table for a given number*/
/*void main()
{
	int i=1;
	while(i<=10)
	{
		printf("%d\n",3*i);
		i++;
	}
}
*/
/*void main()
{
	int i=1;
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",3,i,3*i);
	}
}
*/
/****3..calculate the sum of numbers in the given range**/
/*int main()
{
	int sum=0;
	int n,i;//i=1;
	printf("enter the number:");
	scanf("%d",&n);
	/*while(i<=n)
	{
		sum=sum+i;
		i++;
	}*/
	/*for(i=1;i<=n;i++)
	{
		sum=sum+i;
		
	}
	printf(" the sum of the givn numbers is:%d\n ",sum);
}
*/
/***4.. check the given number is prime or not**/
/*void main()
{
	int i=1;
	int n;
	int count=0;
	printf("enter the given number:");
	scanf("%d",&n);
	/*while(i<=n)
	{
		if(n%i==0)
		{
			count++;
		}
		i++;
	}*/
	/*for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("given number is prime");
		
	}
	else{
		printf("given number is not prime");
	}
	
}
*/
/*5..**check the given number is armstrong or not..***/
/*void main()
{

	int rem;
	int sum=0;
	int n,temp;
	printf("enter the number:");
	scanf("%d",&n);
	temp=n;
	/*while(n>0)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
			
	}
	

	if(temp==sum)
	{
		printf("number is armstrong:");
	}
	else{
		printf(" not armstrong:");
	}
	return 0;

}
*/
//6./*check the number is perfect or not*/
/*#include<stdio.h>
void main()
{
	int i=1;
	int n;
	int sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	/*while(i<n)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
	*/
	/*for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		printf("number is perfect:");
	}
	else{
		printf("number is not perfect:");
	}
}
*/
/*find the factorial of the given number*/
/*#include<stdio.h>
void main()
{
	int i=1;
	int n;
	int fact=1;
	printf("enter the number:");
	scanf("%d",&n);
	/*while(i<=n)
	{
		fact=fact*i;
         i++;
    }
    */
    /*for(i=1;i<=n;i++)
    {
    	fact=fact*i;
	}
    printf("%d\n",fact);
}
*/
/*check the given number is strong or not*//*
void main()
{
	int i=1;
	int num,r,temp,sum=0;
	int fact=1;
	
	printf("enter the number:");
	scanf("%d",&num);
	temp=num;
	while(num)
	{
		
		r=num%10;
		
	}
	while(i<=r)
	{
		fact=fact*i;
		i++;
	}
	sum=sum+fact;
	num=num/10;
	if(num==temp)
	{
		printf("number is strong");
	}
	else{
		printf("number is not strong");
	}
}
/*
/*#include <stdio.h>
void main()
{
	int i;          //variable declaration
	int n;
	int temp;
	int rev=0;
	printf("enter a number");     //read user value
	scanf("%d",&n);
	temp = n;
	while(n!=0)
	{
		i=n%10;
		rev=rev*10+i;
		n=n/10;
	}                          //end while
		if(temp==rev)
		printf("%d is palindrome ",temp);
	else
		printf("%d is not palindrome ",temp);
		
} 
*/
/*#include <stdio.h>
void main()
{
	int n;                         //variable declaration
	int first;
	int last;
	int sum;
	printf("enter the number");      //read user value
	scanf("%d", &n);
	last=n%10;                  //condition to print last no
	while(n>=10)
	{
		n=n/10;
	}                                  //end while
	first=n;
	printf("first no is %d\n",first);
	printf("last no is %d\n" ,last);
	sum=first+last;
	printf("sum of first and last digit is %d\n", sum);      

*/
/*#include<stdio.h>
void printPrimes();  
void main() 
{
    printPrimes();
}
void printPrimes() 
{
    int n = 2; 
    int i, flag;
    while (n <= 100) {
        flag = 1; 
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                flag = 0;  
                break;
            }
        }
        if (flag == 1)
		 {
            printf("%d\n", n);
        }
        n++;
    }
}
*/	
/*#include<stdio.h>
int isPrime(int num);
int main() {
    int n;
    for (n = 1; n <= 100; n++) {
        if (isPrime(n)) {  
            printf("%d ", n);
        }
    }
    return 0;
}
int isPrime(int num) {
    int i;

    if (num < 2) {
        return 0;  
    }
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }

    return 1; 
}
*/

/*Write a C program to print Fibonacci series up to n terms.*/
/*#include <stdio.h>
void printFibonacci(int n);
int main() {
    int num;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    printFibonacci(num);

    return 0;
}
void printFibonacci(int n) {
    int t1 = 0, t2 = 1, T, i;
    printf("Fibonacci series: %d, %d", t1, t2);
    for (i = 1; i <= n; i++) {
        T = t1 + t2;  
        printf(", %d", T); 
        t1 = t2; 
        t2 = T; 
    }
    printf("\n");
}
*/
#include <stdio.h>
void printFibonacciSeries();
void main() 
{
    printFibonacciSeries();
}
void printFibonacciSeries() 
{
    int i, n;
    int t1 = 0, t2 = 1, T;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series: %d, %d", t1, t2);
    for (i = 1; i <= n; i++)
	 {
        T = t1 + t2;
        printf(", %d", T);
        t1 = t2;
        t2 = T;
    }

    printf("\n");
}


