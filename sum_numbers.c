#include <stdio.h>
/*int main()
{
    int sum = 0,n;
    system("cls");
    printf("Enter the nth term: ");
    scanf("%d",&n);
    for (int i = 0; i <= n; i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);    
    return 0;
} */

//Alternate method using formula
int main()
{
    int sum = 0, n;
    system("cls");
    printf("Enter the nth term: ");
    scanf("%d", &n);
    sum = (n * (n + 1)) / 2;
    printf("%d", sum);
    return 0;
}