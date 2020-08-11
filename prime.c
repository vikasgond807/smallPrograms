#include<stdio.h>
int main()
{
    int n;
    int isPrime = 1;
    printf("Enter the No. to check prime: ");
    scanf("%d",&n);
    for (int i = 2; i < n; i++)
    {
        if(n%i==0)
        {
            isPrime = 0;
        }
    }
    if(isPrime==1)
    {
        printf("The No. %d is Prime",n);
    }
    else
    {
        printf("The No. %d is Not Prime",n);
    }
    return 0;
}