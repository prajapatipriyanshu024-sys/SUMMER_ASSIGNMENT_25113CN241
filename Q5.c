#include<stdio.h>
int main()
{

    int num,temp,digit,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num;
    if(temp<0)
    {
        temp=-temp;
    }
    while(temp!=0)
    {
        digit=temp%10;
        sum+=digit;
        temp/=10;
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}