#include<stdio.h>
int main()
{
    int n,i=0,bin[20],rem;
    system("cls");
    printf("Enter the No. to convert it in binary: ");
    scanf("%d",&n);
    while(n)
    {
        rem = n%2;
        n=n/2;
        bin[i] = rem;
        i++;
    }
    for (int j = i-1; j >= 0 ; j--)
    {
        printf("%d",bin[j]);
    }
    return 0;
}