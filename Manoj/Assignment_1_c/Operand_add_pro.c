#include<stdio.h>
int main(void)
{
    int opd1,opd2;
    printf("Enter Two Operands : ");
    scanf("%d%d",&opd1,&opd2);

    opd1= opd1 + opd2 ;
    printf("Sum of Two Opdds=%d",opd1);
    
    return 0;
}