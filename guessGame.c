#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main()
{
    int n,g,i=1;
    srand(time(0));
    n = rand()%100+1;
    //printf("No. is %d\n",n);
    printf("Guess the no.\n");
    do
    {
        scanf("%d",&g);
        if(g>n){
            printf("Smaller No. Pls\n");
        }
        else if(g<n){
            printf("Greater No. Pls\n");
        }
        else
        {
            printf("You Won !\n");
        }
    }while (g!=n);
    return 0;
}
