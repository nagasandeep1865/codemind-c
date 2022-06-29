#include<stdio.h>
int main()
{
    int x,y,i,GCD;
    scanf("%d %d",&x,&y);
    for(i=1;i<=x&&i<=y;i++)
    {
        if(x%i==0&&y%i==0)
        GCD=i;
    }
    printf("%d",GCD);
    return 0;
}