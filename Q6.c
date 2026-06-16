#include<stdio.h>
int main()
{
    int num,temp,reverse=0,digit;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        digit=temp%10;
        reverse=reverse*10+digit;
        temp/=10;
    }
    printf("Reverse of the number: %d\n", reverse);
    return 0;
}