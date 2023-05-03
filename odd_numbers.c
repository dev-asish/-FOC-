#include <stdio.h>

int main() 
{
    int i, num;
    
    printf("enter the number :");
    scanf("%d",&num);
    printf("the even num is :\n");
    for ( i=1;i<=num;i+=1)
    {
        if (i%2!=0)
            printf("%d\n",i);
    }
    return 0;
}
