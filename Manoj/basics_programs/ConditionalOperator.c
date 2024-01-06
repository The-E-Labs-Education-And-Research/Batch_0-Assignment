// #include<stdio.h>
// int main(void)
// {
//     int a,b ;
//     printf("Enter Two values : ");
//     scanf("%d%d",&a,&b);
//     printf("Greater Number is %d",a>b?a:b);
//     return 0;
// }

// #include<stdio.h>
// int main(void)
// {
//     int x;
//     printf("Enter a Number : ");
//     scanf("%d",&x);
//     x>0 ? printf("Positive Number") : printf("Negative Number");
//     return 0;
// }

#include<stdio.h>
int main(void)
{
    int x,y,max;
    printf("Enter Two Numbers : ");
    scanf("%d%d",&x,&y);
    max = x>y ? x : y ;
    printf("Greater Number is %d",max);
    return 0;
}