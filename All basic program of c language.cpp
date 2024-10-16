//1.  Write a C program to print all natural numbers from 1 to n. - using while Loop
//Solution :-
       
#include <stdio.h>
void main()
{
       int n;          // variable declaration
       int i=1;                  //here we initialized i=1 because natural no start from 1
       printf(“enter a no:”);           //read user value
       scanf(“%d”,&n);
       while(i<=n)            //while loop, that will print no from 1 to n
      {
             printf(“%d\n”, i);             //printing no.
             i++;                                  //here we increment i by 1
       }                             //end while
}                     //end main








2.    Write a C program to print all natural numbers in reverse (from n to 1). -Using while loop


Solution:-

#include <stdio.h>
       void main()
       {
        int n;           // variable declaration
       int i;
       printf("enter a no:");           //read user value
       scanf("%d",&n);
       while(n>=1)                   //while loop, that will print no from 1 to n
       {
               printf("%d\n",n);               //printing no.
               n--;                                    //here we decrement i by 1
        }                  //end while
}                  //emd main






3. Write a C program to print all alphabets from a to z. - using while loop


Solution:-

#include <stdio.h>
void main()
{
       char ch='a';          // initialized alphabet 'a'
       while(ch<='z')                  //here give the condition where we stop
      {
             printf("%c\n", ch);
             ch++;
       }                             //end while
}                     //end main





4. Write a C program to print all even numbers between 1 to 100. - using While loop


Solution :-


#include <stdio.h>
void main()
{
       int n;          // variable declaration
       int i=0;
       printf("enter a no");           //read user value
       scanf("%d",&n);
       while(i<=n)
      {
             printf("%d\n", i);
             i=i+2;                       // here we increment i by 2
       }                             //end while
}                     //end main





5. Write a C program to print all odd number between 1 to 100.

Solution :-

#include <stdio.h>
void main()
{
       int n;          // variable declaration
       int i=1;        // variable declaration + initialization
       printf("enter a no");           //read user value
       scanf("%d",&n);
       while(i<=n)
      {
             printf("%d\n", i);
             i=i+2;                           //here we increment i by 2
       }                             //end while
}                     //end main





6. Write a C program to find sum of all natural numbers between 1 to n.


Solution :-

#include <stdio.h>
#include <conio.h>
void main()
{
       int n;          // variable declaration
       int i;
       i=1;            // variable initialization
       int sum=0;      
       printf("enter a no:");           //read user value
       scanf("%d",&n);
       while(i<=n)
      {
            sum=sum+i;
            i++;                                    //here we increment i by 1
       }                          //end while
	    printf("%d", sum);
		getch();
}                                //end main







7. Write a C program to find sum of all even numbers between 1 to n.


Solution :-

#include <stdio.h>
#include <conio.h>
void main()
{
       int n;          // variable declaration
       int i;
       i=0;            //variable initialization
       int sum=0;
       printf("enter a no:");           //read user value
       scanf("%d",&n);
       while(i<=n)
      {
            sum=sum+i;
            i=i+2;
       }                              //end while
	    printf("%d", sum);
		getch();
}                                   //end main








8. Write a C program to find sum of all odd numbers between 1 to n.


Solution :-

#include <stdio.h>
#include <conio.h>
void main()
{
       int n;          // variable declaration
       int i;
	i=1;           //variable initialization
	int sum=0;
       printf("enter a no:");           //read user value
       scanf("%d",&n);
       while(i<=n)
      {
            sum=sum+i;
            i=i+2;
       }                        //end while
	    printf("%d", sum);
		getch();
}                                //end main









9. Write a C program to print multiplication table of any number.

Solution :-

#include <stdio.h>
void main()
{
      int i;                       //variable declaration
      int n;
      int mul;
      printf("enter a no:");     //read user value
      scanf("%d",n);
      for(i=1; i<=n; i++)
      {
         mul=i*n;
         printf("%d\n",mul);
      }                               //end for
}                              //end main







10. Write a C program to count number of digits in a number.


Solution :-

#include<stdio.h>
void main()
{
	int n;                             \\variable declaration
	int count=0;                     \\variable declaration+ initialization
	printf("enter the number :");        \\read user value
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		count++;
	}                              \\end while
	printf("%d",count);                    //print count
}                               \\end main









11. Write a C program to find first and last digit of a number.


Solution :-

#include <stdio.h>
void main()
{
	int n;                           //variable declaration
	int first;
	int last;
	printf("enter the number");        //read user value
	scanf("%d", &n);
	last=n%10;
	while(n>=10)
	{
		n=n/10;
	}                               //end while
	first=n;
	printf("first no is %d\n",first);
	printf("last no is %d\n" ,last);
}                                            //end main








12. Write a C program to find sum of first and last digit of a number.


Solution :-

#include <stdio.h>
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
}                             //end main










13. Write a C program to swap first and last digits of a number.


Solution :-

#include <stdio.h>
void main()
{
     int n;               //variable declaration
     int first;
     int last;
     int temp;
     printf("enter a no:");     //read user value
     scanf("%d",&n);
     last=n%10;             //condition to print last no.
     while(n>=10)
     {
       n=n/10;
     }                    //end while
     first=n;
     temp=first;
     first=last;
     last=temp;
     printf("swapping first and last:\n");
     printf("first=%d\n last=%d\n",first, last);
}                                                 //end main












14. Write a C program to calculate sum of digits of a number.


Solution :-

#include <stdio.h>
void main()
{
     int n;               //variable declaration
     int i;
     int sum=0;
     printf("enter a no:");   //read user value
     scanf("%d", &n);
     while(n!=0)
     {
        i=n%10;
        sum=sum +i;
        n =n/10;
     }                        //end while
     printf("sum is %d", sum);
}              //end main









15. Write a C program to calculate product of digits of a number.


Solution :-

#include <stdio.h>
void main()
{
    int i;               //variable declaration
    int n;
    int mul=1;
    printf("enter a no:");      //read user value
    scanf("%d" , &n);
    while(n!=0)
    {
        i=n%10;
        mul=mul*i;
        n=n/10;
    }                         //end while
    printf("mul is %d", mul);
}        //end main











16. Write a C program to enter a number and print its reverse.


Solution :-

#include <stdio.h>
void main()
{
	int n;                     //variable declaration
	int i;
	int rev=0;
	printf("enter the number");   //read user value
	scanf("%d", &n);
	while(n!=0)
	{
		i=n%10;
		rev=rev*10+i;
		n=n/10;
	}                     //end while
	printf("%d",rev);
}                          //end main











17. Write a C program to check whether a number is palindrome or not.


Solution :-

#include <stdio.h>
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
		
}        //end main









18. Write a C program to find frequency of each digit in a given integer.


Solution :-

#include <stdio.h>
void main()
{
	long n;          //variable declaration
	int r;
	int count=0;
	int i;
	printf("enter the number:");      //read user value
	scanf("%d",&n);
	printf("frequency of a no:");    //read user value
	scanf("%d",&i);
	while(n!=0)
	{                 //open while
		r=n%10;
		if(r==i)
		count++;
		n=n/10;
	}                   //end while
	printf(" the i %d present %d times",i,count);
}                     //end main










19. Write a C program to enter a number and print it in words.


Solution :-

#include <stdio.h>
void main()
{
	int n;              //variable declaration
	int i;
	int rev=0;
	printf("enter a number:");    //read user value
	scanf("%d",&n);
	while(n>0)
	{                    //open while
		i=n%10;
		rev=rev*10+i;
		n=n/10;
	}                       //end while
	while(rev>0)
	{                             //open while
		switch(rev%10)
		{                         //open switch
		case 0:printf("zero");
			break;
		case 1:printf("one");
			break;
		case 2:printf("two");
			break;
		case 3:printf("three");
			break;
		case 4:printf("four");
			break;
		case 5: printf("five");
			break;
		case 6:printf("six");
			break;
		case 7:printf("seven");
			break;
		case 8:printf("eight");
			break;
		case 9:printf("nine");
			break;
		}                            //end switch
		rev=rev/10;
	}                    //end while
}              //end main
          












20. Write a C program to print all ASCII character with their values.


Solution :-

#include <stdio.h>
void main()
{                      //open main
	int n;             //variable declaration
	 n=0;           //variable initialization
	 while(n<=100)
	 {                        //open while
		 printf("ASCII value of char is =%d\n" , n,n);
		 n++;
	 }                  //end while
}             //end main










21. Write a C program to find power of a number using for loop.

Solution :-

#include <stdio.h>
void main()
{                  //open main
	int i;                     //variable declaration
	int n;
	int power=1;
	printf("enter a base number");    //read user value
	scanf("%d",&i);
	printf("enter a exponand");
	scanf("%d",&n);
	while(n>0)
	{                          //open while
		power=power*i;
		n--;
	}                                  //end while
	printf("the power is %d" ,power);
}            //end main










22. Write a C program to find all factors of a number.


Solution :-


#include <stdio.h>
void main()
{                      //open main
	int i;                //variable declaration
	int n;
	printf(" enter a number");   //read user value
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{                       //open for
		if(n%i==0)
		{                        //open if
			printf("%d\n",i);
		}                            //end if
	}                     //end for
}                 //end main
            











23. Write a C program to calculate factorial of a number.


Solution :-

#include <stdio.h>
void main()
{                        //open main
	int i;              //variable declaration
	int n;
	int factorial=1;
	printf("enter a no.");  //read value user
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{                             //open for
		factorial=factorial*i;
	}                                 //end for
	printf("factorial of a no is %d" , factorial);
}          //end main









24. Write a C program to find HCF (GCD) of two numbers.


Solution :-

#include <stdio.h>
	void main()
{                                      //open main
	int i;             //variable declaration
	int n1,n2;
	int gcd;
	int min;
	printf("enter a first no.");    //read user value
	scanf("%d", &n1);
	printf("enter a second no");
	scanf ("%d", &n2);
	if(n1<n2)
	{                        //open if
		min=n1;
	}                  //end if
	else
	{                       //open else
		min=n2;
	}                      //end else
	for(i=1; i<=min; i++)
	{                        //open for
		if(n1%i==0 && n2%i==0)
			gcd=i;
	}                          //end for
	printf("%d",gcd);
}                        //end main








25. Write a C program to find LCM of two numbers.


Solution :-

#include <stdio.h>
	void main()
{                       //open main
	int i;               //variable declaration
	int n1,n2;
	int lcm;
	int max;
	int break;
	printf("enter a first no.");     //read user value
	scanf("%d", &n1);
	printf("enter a second no");
	scanf ("%d", &n2);
	if(n1>n2)
	{                 //open if
		max=n1;
	}                     //end if
	else
	{                 //open else
		max=n2;
	}                                     //end else
		if(max%n1==0 && max%n2==0)
		{                                                    //open if
			printf("lcm of %d and %d is %d",n1,n2,max);
		}                                                     //end if
	}               //end main










26. Write a C program to check whether a number is Prime number or not.


Solution :-

#include <stdio.h>
void main()
{                              //open main
	int n;                      //variable declaration
	int i;
	int flag =0;
	printf("enter a no");
	scanf("%d", &n);
	for(i=2; i<n; i++)
	{                               //open for
		if(n%i==0)
			flag =1;
		break;
	}                             //end for
	if (flag==0)
	{                                 //open if
	printf("given no is prime");
	}                                //end if
		else 
		{                                           //open else
			printf("given no is not a prime");
		}                                             //end else
	}               //end main











27. Write a C program to print all Prime numbers between 1 to n.


Solution :-

#include<stdio.h>

void main()

{
                       //open main
        int n=1;            //variable declaration
        int i=2;

        int flag;

        while(n<=100)

        { 
                   //open 1st while
           flag=1;

           i=2;

        while(i<n)

        {
                    //open 2nd while
        if(n%i==0)

        {
                  //open if
           flag=0;

         break;

        }

            //end if
         i++;

        }              //end while
        if(flag==1)

         {                    //open if
          printf("%d",n);
         }                  //end if
             n++;

         }


               //end 2nd while
}          //end main









28. Write a C program to find sum of all prime numbers between 1 to n.


Solution :-

#include<stdio.h>

void main()

{                       //open main
      int sum=0;
           //variable declaration
      int n=1;
      
int i=2;
      
int flag;
      
while(n<=100)

      {                  //open 1st while
         
flag=1; 
         
i=2;

      while(i<n)

      {
               //open 2nd while
      if(n%i==0) 

      {
              //open if
      flag=0;
      
break;

      }           //end if
       
i++;

      }
          //end 2nd while
      if(flag==1)

      {                     //open if
       sum=sum+n; 
      
}
                 //end if
      n++;


      }                    //end 1st while
        
printf("%d",sum);

}                            //end main












29. Write a C program to find all prime factors of a number.

Solution :

#include <stdio.h>
void main()
{
     int n;               //variable declaration
     int i=1;
     int k;
     int flag;
	 printf("enter a no:");  //read user value
	 scanf("%d",&n);
	 while(i<n)          //condition
	 {                    //open 1st while
		 flag=0;
		 if(n%i==0)     //condition for factors
		 {                      //open if
			 k=2;
			 while(k<n)     //condition for prime no
			 {                      //open 2nd while
				 if(n%k==0)
                                 {
					 flag=1;
                                  }
			 }                            //end 2nd while
			 k++;
		 }                        //end if
		 if(flag==1)
	         printf("%d\n",i);
	 }                          //end 1st while
	 i++;
}                      //end main









30. Write a C program to check whether a number is Armstrong number or Not.


Solution :-

#include <stdio.h>
void main()
{                          //open main
     int j;              //variable declaration
      int num ,rem;
      int power=3;
      int ans;
      int sum=0;
      int temp;
      int n;
      printf("enter a no:");      //read user value
      scanf("%d",&n);
      temp=n;
      while(n!=0)           //condition
      {                        //open while
          ans=1;
          rem=n%10;
          num=rem;
      for(j=2; j<=3; j++)
        {                       //open for
              ans=ans*num;
         }                    //end for
       sum=sum+ans;
       n=n/10;
      }                 //end while
      if(sum==temp)               //condition for armstrong no
      {
       printf("armstrong no is %d",temp);
      }
      else
      {
        printf("armstrog no is not %d", temp);
      }
}            //end main





 




31. Write a C program to print all Armstrong numbers between 1 to n.


Solution :-

#include<stdio.h>


void main()

{
                       //open main
       int n=500;
    //variable declaration
       int i=0;
       

while(i<=n)

       {                      //open while 
          int temp=i;
  
          int sum=0; 
 
          int k=0;
 
          int rem;

          int num;
 
          while(temp!=0)

          {
  
             rem=temp%10;
 
             num=rem;


    
             int y=1;
  
             int power=3;

             int ans=1;
 
             while(y<=3)

             {
  
 
               ans=ans*num;

                y++;

              }

              
sum=sum+ans;

              temp=temp/10; 

              k++;

          
}                     //end while
          
if(sum==i)

            { 

              printf("%d \n",i);

            }

               i++;

         

}

































  


}               //end main










32. Write a C program to check whether a number is Perfect number or Not.

Solution :-

#include <stdio.h>
void main()
{                         //open main
	int n;
	int i;
	int sum=0;                //variable declaration + initialization
	int r;
	printf("enter a no");     //read user  value
	scanf("%d",&n);

	for(i=1; i<n; i++)
	{
		if( n%i==0)
		{  
			sum=(sum+i);
		}
	}
		if(sum==n)
		{
			printf("%d is a perfect no", n);
		}

		else
			{
				printf("%d is not a perfect no" ,n);
		}
	
}                   //end main











33. Write a C program to print all Perfect numbers between 1 to n.


Solution :-

#include <stdio.h>
void main()
{                      //open main
	int i;                      //variable declaration
        int a;
        int n;
        int sum;
	printf("enter a no:");    //read user value
	scanf("%d", &a);
	for(i=1; i<=a; i++)
	{
		sum=0;
		for(n=1; n<i; n++)
		{
			if(i%n==0)
			{
				sum=sum+n;
			}
		}
		if(sum==i)
		{
			printf("%d\n", i);
		}
	}
}                          //end main













34. Write a C program to check whether a number is Strong number or not.	  


Solution :-

include<stdio.h>



void main()

{
 
     int n;
      //variable declaration+ initialization
     int temp=n;
    
 int j;
 
     int fact;
  
  
     int i=0;
     
int rem;
     
int num;

     int sum=0;
     printf("enter a no:);
     scanf("%d", &n);
     
while(n!=0)

    {
                  //open while
       
rem=n%10;
       
num=rem;
       
j=1;
       
fact=1;

       while(j<=rem)
       
{
 
           fact=fact*j;
           
j++;

        }

        sum=sum+fact;
        
n=n/10;
        
i++;

     }                         //end while
         if(sum==temp)

            {
              printf("strong no is %d",temp);

             }
      else

        {

 
           printf("strong no is not %d",temp);


        }

}                                             









35. Write a C program to print all Strong numbers between 1 to n.

Solution :-

#include <stdio.h>
void main()
{
	int n;                  //variable declaration
        int fact;
        int i;
        int a; 
        int sum;
        int temp;
        int num;
	printf("enter a no");
	scanf("%d",&num);
	for(n=1; n<=num; n++)
	{                              //open for loop
		temp=n;
		sum=0;
		while(temp>0)
		{
			fact=1;
			i=temp%10;
			for(a=1; a<=i; a++)      //condition for factorial
			{
				fact=fact*a;
			}
			sum=sum+fact;
			temp=temp/10;
		}
		if (sum==n)
		{
			printf("%d\n",n);
		}
	}                                        //end for loop
}













36. Write a C program to print Fibonacci series up to n terms.


Solution :-

#include <stdio.h>
void main()
{
    int i;                 //variable declaration
    int n;
    int t1=0;
    int t2=1;
	int T;
    printf("enter a no");     //read user value
    scanf("%d",&n);
    printf("fibonacci series:%d, %d",t1, t2);      //printing o and 1
    for(i=1; i<=n; i++)
    {                      //open for loop
         T=t1+t2;
         printf("%d",T);
         t1=t2;
         t2=T;
         
     }                 //end for loop
}









