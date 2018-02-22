#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,e[100][100],c[100],d[100],la,lb,r,sum=0,p,f[200],count,g[100];
    char a[100],b[100];
    cout<<"Enter the two number to be multiplied";
    cin>>a>>b;
    la=strlen(a);
    lb=strlen(b);
    for(i=0;i<la;i++)
        c[i]=(int)a[i]-'0';
    for(i=0;i<lb;i++)
        d[i]=(int)b[i]-'0';
    for(i=0;i<la;i++)
    {
        for(j=0;j<lb;j++)
        {
           e[i][j]=c[i]*d[j];
        }
    }
    count=0;
    for(k=0;k<=(la+lb-2);k++)
    {
         count++;
        i=la-1;
        j=lb-1-k;
        if(count>(lb))
        {
            i=la-(count-lb)-1;
            j=0;
        }
        sum=0;
        while(i>=0 && j<=lb-1)
        {
            sum=sum+e[i][j];
            i--;
            j++;
        }
        f[k]=sum;
    }
    r=0;
    for(i=0;i<=k;i++)
    {
       p=f[i]+r;
       g[i]=p%10;
        r=p/10;
    }
     if(g[k]==0)
        k--;
    for(i=k;i>=0;i--)
        cout<<g[i];
}
