#include<stdio.h>
int main()
{
	char ch;
	printf("enter any charecter:-");
	scanf("%c",&ch);
	if (ch>='a'&&ch<='z')
	{
	printf("this is a lower case.");
    }
    else if (ch>='A'&&ch<'z')
	{   
	printf("this is an upper case.");
	} 
	else
	{
		printf("this is special charecter.");
    }   
    
}

