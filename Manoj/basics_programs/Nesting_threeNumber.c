// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter Three Number : ");
//     scanf("%d%d%d",&a,&b,&c);

//     if(a>b)
//     {
//         if(a>c)
//         {
//             printf("A is greater %d",a);
//         }else{
//             printf("C is greater %d",c);
//         }
//     }
//     else
//     {
//         if(b>c)
//         {
//             printf("B is greater %d",b);
//         }else{
//             printf("C is greater %d",c);
//         }
//     }
//     return 0;
// }

#include<stdio.h>
int main(void)
{
    int a,b,c;
    printf("Enter Three Number : ");
    scanf("%d%d%d",&a,&b,&c);

    printf("Greater Number is=%d",a>b?a>c?a:c:b>c?b:c);
    return 0;
}