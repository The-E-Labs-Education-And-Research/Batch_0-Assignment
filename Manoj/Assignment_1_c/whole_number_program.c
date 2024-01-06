 

// 1. Develop a C program to perform operations (+,*,-, / and %) on two whole numbers. Identify
//suitable data types to represent the numbers and resultant values

		#include<stdio.h>
		int main(void)
		{
		int num1,num2;
		printf("Enter Two whole Number : ");
		scanf("%d%d",&num1,&num2);
		
		int sum= num1 + num2 ;
		printf("Sum=%d\n",sum);
		
		int mul= num1 * num2 ;
		printf("Mul=%d\n",mul);
		
		int sub= num1 - num2 ;
		printf("Sub=%d\n",sub);
		
		if(num2 != 0)  
		{
		int quotient= num1 / num2 ;
		int remainder= num1 % num2 ;
		printf("Quotient=%d\n",quotient);
		printf("Remainder=%d\n",remainder);
		}else
		{
		printf("ERROR");
		}
		return 0;
		}