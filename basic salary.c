#include <stdio.h>
void main()
{
	int BS,x;
	float HRA,DA,GS;
	printf("enter your basic salary:-");
	scanf("%d",&BS);
	if (BS>=10000 && BS<20000)
	{
		HRA=BS*.20;
		DA=BS*.80;
	}
	else if (BS>=20000 && BS<30000)
	{
		HRA=BS*0.25;
		DA=BS*0.9;
	}
	else 
	{
		HRA=BS*0.30;
		DA=BS*0.95;
	}
	x=HRA+DA+BS;
	printf(" the gross salary is %d",x);
}
