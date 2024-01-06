#include<stdio.h>
int main(void)
{
    int x;
    printf("Enter a Number : ");
    scanf("%d",&x);
    if(x>0)
    {
        printf("Number is Positive");
    }
    if(x<0)
    {
        printf("Number is Negative");
    }
    return 0;
}