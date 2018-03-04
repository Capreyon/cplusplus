#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,i,c=0,m,t,p=0,d=0,y,k=0,l,n;
    cin>>a>>b;
    x=(a<b?a:b);
    y=(a>b?a:b);
    for(i=1;i*i<=x;i++)
    {
        if(x%i==0)
        {
          t=i;
          m=x/i;
          if(y%i==0)
            c++;
          if(y%m==0)
            d++;
            }

            p=c+d;
        }
        k=p-1;
        n=sqrt(a);
        l=n;
        if(a==b && l*l==a )
            cout<<k;
        else
            cout<<p;



}
