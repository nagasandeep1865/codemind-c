#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(1<=n<=10000)
    {
        if(n%2==0)
        {
            printf("Even");
        }
        else
        {
            printf("Odd");
        }
    }
}