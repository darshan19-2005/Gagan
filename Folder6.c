#include<stdio.h>

int main()
{
    int num, rev=0, rem=0;
    printf("Enter the numbaarrs :");
    scanf("%d", &num);
    
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        printf("%d\n",rev);
        num=num/10;
    }

    return 0;
}
