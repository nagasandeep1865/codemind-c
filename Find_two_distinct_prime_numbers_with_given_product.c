#include<stdio.h>
int main()
{
    int n,i,j,k,p,q,c=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        for(j=2;j<n;j++)
        {
            for(k=2;k<n;k++)
            {
                if(i%k!=0 && j%k!=0)
                {
                    if(i*j==n)
                    {
                        c++;
                        p=i;
                        q=j;
                    }
                }
            }
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d %d",q,p);
    }
}