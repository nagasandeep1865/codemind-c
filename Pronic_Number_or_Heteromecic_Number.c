#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,flag,prno;
    scanf("%d",&prno);
    for(i=1;i<=prno;i++)
    {
        if(i*(i+1)==prno)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}