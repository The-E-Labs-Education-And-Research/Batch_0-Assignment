/*Develop a C program which adds all numbers from 1 to N, except those which are divisible by 5.
Implement this using for loop and continue statement.*/

#include<stdio.h>
int main(void)
{
    int n,sum=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        if(i%5==0)
        {
            continue;
        }
        sum= sum+i ;
    }
    printf("Sum of Numbers is=%d",sum);
    return 0;
}