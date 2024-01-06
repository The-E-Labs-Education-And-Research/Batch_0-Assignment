#include<stdio.h>
int main(void)
{
    char alphabates;
    printf("Enter Any  Alphabates : ");
    scanf("%c",&alphabates);

    switch(alphabates)
    {
        case 'A':
        case 'a':
        printf("A for Apple\n");
        break;

        case 'B':
        case 'b':
        printf("B for Bat\n");
        break;

        case 'D':
        case 'd':
        printf("D for Dog\n");
        break;

        case 'F':
        case 'f':
        printf("F for fan\n");
        break;

        default:
        printf("Alphabates are not in range");

    }
    return 0;
}