// Print AP for 4,7,10,13,16 ......

#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    for(int i=4; i<=3*n+1; i=i+3)
    {
        printf("%d\t",i);
    }
    return 0;
}