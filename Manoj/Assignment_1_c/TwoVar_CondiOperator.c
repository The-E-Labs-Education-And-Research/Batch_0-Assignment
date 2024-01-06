/* Develop a C program having following logic. If i is 20 or j is 20, display as “Atleast one variable is
 having 20” otherwise display “Both variables are not having 20”. If i is less than or equal to 40
 and j is less than or equal to 40, It should display “Both are less than or equal to 40” otherwise, it
 should display as “Both are not less than or equal to 40”. Implement this using if-else statement
 as well as with conditional operator.*/

#include<stdio.h>
int main(void)
{
    int i,j,result1,result2 ;
    printf("Enter two values for i and j : ");
    scanf("%d%d",&i,&j);

    printf((i==20 || j==20)?"Atleast one variable is having 20\n" : "Both variable are not having 20\n") ;
    

    printf((i<=40 && j<=40) ? "Both are less than or equal to 40\n" : "Both are not less than or equal to 40\n") ;
    

    return 0;
}