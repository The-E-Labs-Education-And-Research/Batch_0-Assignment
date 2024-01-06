#include<stdio.h>
int main(void)
{
    float interest,principal,rate,time ;
    printf("Enter PRINCIPAL  RATE   TIME  : ");
    scanf("%f%f%f",&principal,&rate,&time);

    interest =(principal * rate * time )/100 ;
    printf("Simple Interest is=%.2f",interest);

    return 0;
}