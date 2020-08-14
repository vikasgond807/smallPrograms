#include<stdio.h>
int main()
{
    int a[100],n;
    printf("Enter the size of array: \n");
    scanf("%d",&n);
    printf("Enter array element: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    int max;
    max = a[0];
    for (int i = 0; i < n; i++)
    {
        if(a[i]>max){
            max=a[i];
        }
    }

    printf("\nLargest No. in array is %d",max);
    
    return 0;
}