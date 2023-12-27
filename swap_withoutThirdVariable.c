

	// Write a program to swap two Numbers without third variable
	
	#include<stdio.h>
	int main()
	{
		int a,b;
		printf("Enter Two Numbers: ");
		scanf("%d%d",&a,&b);
		
		a=a+b;
		b=a-b;
		a=a-b;
		printf("Numbers Afte Swapping:\n%d\n%d",a,b);
	return 0;
	}