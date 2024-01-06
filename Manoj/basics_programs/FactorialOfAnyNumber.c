// Factorial of any Number

#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    int product=1;
    for(int i=1; i<=n; i++)
    {
        product=product*i ;

    }
    printf("Factorial of a %d is=%d",n,product);
    return 0;
}