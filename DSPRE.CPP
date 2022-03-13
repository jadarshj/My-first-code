#include<stdio.h>
#include<conio.h>
//program to add two numbers using functions
/*
int add(int x, int y)
{
	return (x+y);
}
void main()
{
	clrscr();
	int a,b,c;
	printf("\nEnter the value of a and b followed by a space :");
	scanf("%d %d",&a,&b);
	c = add(a,b);
	printf("\n%d + %d = %d",a,b,c);
	getch();
}
*/
//program to find factorial of a given number
/*
int factorial(int x)
{
	if(x == 0 || x == 1)
		return 1;
	else
		return (x*factorial(x-1));
}
void main()
{
	clrscr();
	int num,f;
	printf("\nEnter a number to find factorial :");
	scanf("%d",&num);
	f = factorial(num);
	printf("\nFactorial of %d is %d",num ,f);
	getch();
}
*/
/*
// program to check a number is prime or non
void main()
{
	clrscr();
	int num,count = 1;
	printf("\nEnter a integer number to check prime :");
	scanf("%d",&num);
	for(int i = 2 ; i <= (num/2) ; i++)
	{
		if(num % i == 0)
			count = 0;
	}
	if(count == 1)
		printf("\n%d is a prime number",num);
	else
		if(count == 0)
			printf("\n%d is not a prime number",num);
	getch();
}
*/
/*
//Program to print a right angled triangle
void Rtri(int rw)
{
	for(int r = 0 ; r < rw ; r ++)
	{
		for(int c = 0 ; c <= r ; c++)
			printf(" *");
		printf("\n");
	}
}
void main()
{
	clrscr();
	int rows;
	printf("\nEnter the Numbers of Rows : ");
	scanf("%d",&rows);
	Rtri(rows);
	getch();
}
*/
/*
//Program to Enter 10 numbers in an array and display them
void main()
{
	clrscr();
	int numarr[10];
	printf("\nEnter 10 integer numbers followed by spaces or enter key: ");
	for(int i = 0 ; i < 10 ; i ++)
	{
		scanf("%d",&numarr[i]);
	}
	printf("\nThe Numbers you entered are : \n");
	for(i = 0 ; i < 10 ; i ++)
	{
		printf("%4d",numarr[i]);
	}
	getch();
}
*/
/*
//Progrm to find the length of a given number
void main()
{
	clrscr();
	int num,len=0 ;
	printf("To find the length Enter a Number : ");
	scanf("%d",&num);
	if(num < 0)
		num = - num ;
	for(int i = 0 ; num > 0 ; i ++)
	{
		num = num / 10 ;
		len += 1 ;
	}
	printf("You have entered a %d digit Number",len);
	getch();
}
*/
/*
//program to check whether a given number is pallindrome or not
void main()
{
	clrscr();
	int num , onum = 0 , numcpy;
	printf("\nTo check pallindrome Enter a Number : ");
	scanf("%d",&num);
	numcpy = num ;
	for(; num > 0 ; num = num / 10 )
	{
		onum = onum * 10 ;
		onum = onum + ( num % 10 ) ;
//		onum = (onum * 10) + (num % 10) ;    //alternate Expression
	}
	printf("\nOpposite of %d is %d",numcpy,onum);
	if(numcpy == onum )
		printf("\nTherefore %d is a pallindrome number",numcpy);
	else
		printf("\nTherefore %d is not a pallindrome number",numcpy);
/*	while(num > 0)
	{
		if(num % 10 == )
	}
	*/
//	getch();
//}
