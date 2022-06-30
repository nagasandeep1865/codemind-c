#include<stdio.h>
int main()
{
    int n,temp,sq,c=1;
    scanf("%d",&n);
    temp=n;
    sq=n*n;
    while(n!=0)
    {
        n=n/10;
        c=c*10;
    }
    if(sq%c==temp)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}