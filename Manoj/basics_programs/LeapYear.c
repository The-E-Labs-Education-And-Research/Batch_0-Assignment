// Given Year leap year or not

#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter a Year : ");
    scanf("%d",&n);

    if(n%4==0 || n%400==0)
    {
        printf("Given year is leap year");
    }else
    {
        printf("Given year is Simple year");
    }

    return 0;

}