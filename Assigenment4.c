 /*1.Write a C program to print all Prime numbers between 1 to n.*/
/*#include<stdio.h>
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
          printf("%d\n",n);
         }                  //end if
             n++;

         }


               //end 2nd while
}          //end main
*/
//*2. Write a C program to print all Armstrong numbers between 1 to n.*/
/*#include<stdio.h>
void main()
{

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

}*/

/*3/*Write a C program to print all Perfect numbers between 1 to n.*/
/*#include <stdio.h>
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
*/

/*4 Write a C program to print Fibonacci series up to n terms.*/
/*#include <stdio.h>
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
         printf("%d\n",T);
         t1=t2;
         t2=T;
         
     }                 //end for loop
}
*/
/*Write a C program to print all Strong numbers between 1 to n.*/
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











