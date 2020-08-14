#include<stdio.h>
int main()
{
    int n,r=0,rem;
    system("cls");
    printf("Enter the No. to reverse it: ");
    scanf("%d",&n);
    while (n!=0)
    {
        rem=n%10;
        r = r*10+rem;
        n=n/10;
    }
    printf("Reverse of No. is %d",r);
    
    return 0;
}