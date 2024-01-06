#include<stdio.h>
int main(void)
{
    int num1,num2,max;
    printf("Enter Two Numbers : ");
    scanf("%d%d",&num1,&num2);

    max = (num1>num2) ? num1 : num2 ;
    printf("Maximum Number is=%d",max);
    
    return 0;
}