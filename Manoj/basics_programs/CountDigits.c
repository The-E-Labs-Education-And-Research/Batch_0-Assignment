// Count Digits in a Number

#include<stdio.h>
int main(void)
{
    int n, count ;
    printf("Enter a Number : ");
    scanf("%d",&n);

    count =0;
    while(n!=0)
    {
        n=n/10 ;
        count++ ;
    }
    printf("The Number of Digits are %d",count);
    return 0;
}