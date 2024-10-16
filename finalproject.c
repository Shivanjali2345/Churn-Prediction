#include<stdio.h> 
#include<stdlib.h> 
#include<string.h>
typedef struct Book
{
	int bookId;
	char bookName[100];
	char authorName[100];
	char category[100];
	int price;
	float rating;
}Book;
void storeBook(Book*, int);
void displayBook(Book*,int);
int searchbyname(Book*,int,char* );
int searchbyid(Book*,int,int);
int showauthorsbook(Book*, int,char* );
int showcategorybook(Book*,int,char*);
int updatebook(Book*,int,int );
int removebook(Book*,int,int);
void display1(Book);
void sortpricehtol(Book*,int);
void sortpriceltoh(Book*,int);
void sortratinghtol(Book*,int);
void sortratingltoh(Book*,int);
void main() {
	int size,choice,ctr=0;
	printf("Enter the how many book to store ");
	scanf("%d",&size);

	Book* book=(Book*)malloc(sizeof(Book)*size);
	  ctr = hardCode( book, ctr);

	do {
		printf("\n1.Store Book details\n2.Display all books\n3.Search book\n4.Show Author Book\n5.Show the category wise Book\n6.Update\n7.Remove the Book\n8.Sort\n0.Exit\n");
		printf("Enter Your Choice:-");
		scanf("%d",&choice);
		switch(choice) {
			case 1: {
				if(ctr<size) {
					storeBook(book,ctr);
					ctr++;
				} else
				{
				
					char ch;
					printf("Insufficient Memory!!!");
					printf("\n Do you want to increase memory?(y/n)!!!");
					scanf("%c",&ch);
					if(ch=='y'||ch=='Y')
					{
						int n;
						printf("\n How much memory you want to increase");
						scanf("%d",&n);
						size=size+n;
						book=(Book*)realloc(book,sizeof(Book)*size);
					}
				}
					
				break;
			}
			case 2: {
				displayBook(book,ctr);
				break;
			}
			case 3: {
				int choice;

				printf("\n1.Search by book name\n2.Search by ID");
				scanf("%d",&choice);

				if(choice==1) {
					char name[20];
					printf("Enter the book name you want to search");
					scanf("%s",&name);
					int res =searchbyname(book,ctr,name);
					if(res!=-1) {

						printf("\nBook ID: %d\t",book[res].bookId);
						printf("Book Name: %s\t",book[res].bookName);
						printf("Book Price: %d\t",book[res].price);
						printf("Book Author Name: %s\t",book[res].authorName);
						printf("Book Rating: %.1f\t",book[res].rating);
						printf("Book Category: %s",book[res].category);

					} else {
						printf("Book not found");
					}

				} else if(choice==2) {
					int id;
					printf("Enter the ID of book you want to search");
					scanf("%d",&id);
					int res=searchbyid(book,ctr,id);

					if(res!=-1) {
						printf("\nBook ID: %d\t",book[res].bookId);
						printf("Book Name: %s\t",book[res].bookName);
						printf("Book Price: %d\t",book[res].price);
						printf("Book Author Name: %s\t",book[res].authorName);
						printf("Book Rating: %.1f\t",book[res].rating);
						printf("Book Category: %s",book[res].category);

					} else {
						printf("Book not found");
					}
				} else {
					printf("Invalid choice");
				}

				break;
			}
			case 4: {

				char aname[20];
				printf("Enter the author name to show the book");
				scanf("%s",aname);
				int res=showauthorsbook(book,ctr,aname);

				if(res!=-1) {

					printf("Given author name  books is not found!!!");
				}
				break;
			}
			case 5 : {

				char cname[30];
				printf("Enter the category of book you want to search");
				scanf("%s",cname);
				int res=showcategorybook(book,ctr,cname);
				if(res!=-1) {
					printf("Given category book is not found!!!");
				}

				break;
			}
			case 6 : {

				int bid;
				printf("Enter the book id you want to update the book");
				scanf("%d",&bid);
				int res=updatebook(book,ctr,bid);
				if(res!=-1) {
					printf("Book details is update  succesfully.");
				} else {
					printf("Book is not found.");
				}
				break;
			}
			case 7: {

				int rid;
				printf("Enter the id of book you want to remove");
				scanf("%d",&rid);
				
				int res=removebook(book,ctr,rid);

				if(res!=-1) {
					printf("The book is remove succesfully!!!");
					ctr--;
				} else {
					printf("Given id book not found!!!");
				}

				break;
			}
			case 8 : {
				int choice;
				
				printf("You want sort the \n1.Price wise lowest to highest \n2.Price wise highest to lowest\n3.Rating wise lowest to highest\n4.Rating wise highest to lowest");
				scanf("%d",&choice);
				
				if(choice==1) {
					sortpriceltoh(book,ctr);
				} else if(choice==2) {
					sortpricehtol(book,ctr);
				} else if(choice==3) {
					sortratingltoh(book,ctr);
				} else if(choice==4) {
					sortratinghtol(book,ctr);
				} else {
					printf("Invalid choice");
				}
				break;
			}

			case 0: {
				printf("THANK YOU!!!");
				break;
			}
		}
	} while(choice!=0);

}
void storeBook(Book* book, int i ) {

	printf("\nEnter your book ID ");
	scanf("%d",&book[i].bookId);
	fflush(stdin);
	printf("\nEnter your book Name ");
	scanf("%s",book[i].bookName);
	printf("\nEnter the Price of book ");
	scanf("%d",&book[i].price);
	fflush(stdin);
	printf("\nEnter the name of author ");
	scanf("%s",book[i].authorName);
	printf("\nEnter the rating of book ");
	scanf("%f",&book[i].rating);
	fflush(stdin);
	printf("\nEnter the category of book");
	scanf("%s",book[i].category);

}
void displayBook(Book* book, int ctr) {
	
	printf("\n+--------+-------------------+--------+----------------------+-------+------------+");
	printf("\n|  ID    |    Name           |  Price |    Author            |Rating | Category   |");
	printf("\n+--------+-------------------+--------+----------------------+-------+------------+");
	int i;
	for(i=0; i<ctr; i++) {
		
		printf("\n| %-6d | %-17s |  %-4d  |  %-19s | %-5.1f | %-10s |",book[i].bookId,book[i].bookName,book[i].price,book[i].authorName,book[i].rating,book[i].category);
		printf("\n+--------+-------------------+--------+----------------------+-------+------------+");

	}
}
int searchbyname(Book* book,int ctr,char* name) {
    int i;
	for( i=0; i<ctr; i++) {
		if(strcasecmp(book[i].bookName,name)==0) {
			return i;
		}
	}
	return -1;
}
int searchbyid(Book* book,int ctr,int id) {
     int i;
	for(i=0; i<ctr; i++) {
		if(book[i].bookId==id) {
			return i;
		}
	}
	return -1;
}
int  showauthorsbook(Book* book, int ctr,char* aname) {
	int flag=-1;
	int i;
	for(i=0; i<ctr; i++) {
		if(strcasecmp(book[i].authorName,aname)==0) {
			display1(book[i]);
		}
	}
	return flag;
}
int showcategorybook(Book* book,int ctr,char* cname) {

	int flag=-1;
	int i;
	for(i=0; i<ctr; i++) {

		if(strcasecmp(book[i].category,cname)==0) {

			display1(book[i]);

		}
	}
	return flag;
}
int updatebook(Book* book,int ctr,int bid) {
    int i;
	for(i=0; i<ctr; i++) {
		if(book[i].bookId==bid) {
			printf("\nEnter the Price of book ");
			scanf("%d",&book[i].price);
			printf("\nEnter the rating of book ");
			scanf("%f",&book[i].rating);
			return i;
		}
	}
	return -1;

}
int removebook(Book* book,int ctr,int rid) {
	int i;
	for(i=0; i<ctr; i++) {

		if(book[i].bookId==rid) {
			for(i; i<ctr; i++) {
				book[i]=book[i+1];

			}
			return i;
		}
	}
	return -1;

}
void display1(Book book) {
	printf("\nBook ID: %d\t",book.bookId);
	printf("Book Name: %s\t",book.bookName);
	printf("Book Price: %d\t",book.price);
	printf("Book Author Name: %s\t",book.authorName);
	printf("Book Rating: %.1f\t",book.rating);
	printf("Book Category: %s",book.category);

}
void sortpriceltoh(Book* book,int ctr) {
	
	Book b[ctr];
	int l;
	for(l=0;l<ctr;l++)
	{
		b[l]=book[l];
	}

	int i,j;
	for(i=0; i<ctr; i++) {
		for(j=i+1; j<ctr; j++) {
			if(b[i].price>b[j].price) {
				Book k;
				k=b[j];
				b[j]=b[i];
				b[i]=k;
			}
		}
	}
	displayBook(b,ctr);

}
void sortpricehtol(Book* book,int ctr) {
	
   
Book b[ctr];
int l;
	for( l=0;l<ctr;l++)
	{
		b[l]=book[l];
	}

	int i,j;
	for(i=0; i<ctr; i++) {
		for(j=i+1; j<ctr; j++) {
			if(b[i].price<b[j].price) {
				Book k;
				k=b[j];
				b[j]=b[i];
				b[i]=k;
			}
		}
	}
	displayBook(b,ctr);

}
void sortratingltoh(Book* book,int ctr) {
	
	Book b[ctr];
	int l;
	for(l=0;l<ctr;l++)
	{
		b[l]=book[l];
	}
	int i,j;
	for(i=0; i<ctr; i++) {
		for(j=i+1; j<ctr; j++) {
			if(b[i].rating>b[j].rating) {
				Book k;
				k=b[j];
				b[j]=b[i];
				b[i]=k;
			}
		}
	}
	displayBook(b,ctr);

}
void sortratinghtol(Book* book,int ctr) {

	Book b[ctr];
	int l;
	for( l=0;l<ctr;l++)
	{
		b[l]=book[l];
	}
	int i,j;
	for(i=0; i<ctr; i++) {
		for(j=i+1; j<ctr; j++) {
			if(b[i].rating<b[j].rating) {
				Book k;
				k=b[j];
				b[j]=b[i];
				b[i]=k;
			}
		}
	}
	displayBook(b,ctr);

}
int hardCode(Book* book,int ctr)
{
	
	Book b1;
	
	b1.bookId=1;
	strcpy(b1.bookName,"Tom Jones");
	b1.price=400;
	strcpy(b1.authorName,"Henry Fielding");
	b1.rating=5;
	strcpy(b1.category,"Novel");
	
	book[ctr++]=b1;
	
	b1.bookId=2;
	strcpy(b1.bookName,"Pride and Prejudice");
	b1.price=500;
	strcpy(b1.authorName,"Jane Austen");
	b1.rating=5;
	strcpy(b1.category,"Novel");
	
	book[ctr++]=b1;
	
	b1.bookId=3;
	strcpy(b1.bookName,"The Red and Black");
	b1.price=350;
	strcpy(b1.authorName,"Stendhal ");
	b1.rating=4.5;
	strcpy(b1.category,"Novel");
	
	book[ctr++]=b1;
	
	b1.bookId=4;
	strcpy(b1.bookName,"David Copperfield");
	b1.price=300;
	strcpy(b1.authorName,"Charles Dikens");
	b1.rating=4;
	strcpy(b1.category,"Novel");
	
	book[ctr++]=b1;
	
	b1.bookId=5;
	strcpy(b1.bookName,"Moby-Dick");
	b1.price=350;
	strcpy(b1.authorName,"Herman Melville");
	b1.rating=5;
	strcpy(b1.category,"Novel");
	
	book[ctr++]=b1;
	
	return ctr;
}
