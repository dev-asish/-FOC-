#include <stdio.h>
int main()
{
    int sum;
    int a,i;
    printf("enter a number :");
    scanf("%d",&a);
    for (i=1;i<=a;i+=1)
    {
        sum+=i*i*i;
    }
    printf("the sum is :%d",sum);
    return 0;
}
