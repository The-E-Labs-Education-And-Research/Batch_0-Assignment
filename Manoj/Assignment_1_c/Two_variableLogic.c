/*Develop a C program having following logic. If i is 20 or j is 20, display as “Atleast one variable is
having 20” otherwise display “Both variables are not having 20”. If i is less than or equal to 40
and j is less than or equal to 40, It should display “Both are less than or equal to 40” otherwise, it
should display as “Both are not less than or equal to 40”. Implement this using if-else statement
as well as with conditional operator. */


#include<stdio.h>
int main(void)
{
    int i,j;
    printf("Enter Two Values For i and j : ");
    scanf("%d%d",&i,&j);

    if(i==20 || j==20)
    {
        printf("Atleast one variable is having 20\n");
    }else
    {
        printf("Both variable are not having 20\n");
    }
    if(i<=40 && j<=40)
    {
        printf("Both are less than or equal to 40\n");
    }else
    {
        printf("Both are not less than or equal to 40\n");
    }
    return 0;
}