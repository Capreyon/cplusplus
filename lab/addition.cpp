#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,c[100],d[100],la,lb,p,e[100],k,r,q;
    char a[100],b[100];
    cout<<"Enter the two number"<<endl;
    cin>>a>>b;
    la=strlen(a);
    lb=strlen(b);
    for(i=0;i<la;i++)
        c[i]=(int)a[i]-'0';
    for(i=0;i<lb;i++)
        d[i]=(int)b[i]-'0';
    p=max(la,lb);
    i=la-1;
    j=lb-1;
    r=0;
    for(k=p;k>=0;k--)
    {
       if(i<0)
       {
          i++;
            c[i]=0;
       }
       if(j<0)
       {
           j++;
            d[j]=0;
       }
       q=c[i]+d[j]+r;
       e[k]=q%10;
       r=q/10;
       i--;
       j--;
    }
    k=0;
    if(e[0]==0)
        k=1;
    for(i=k;i<=p;i++)
    {
        cout<<e[i];
    }
}
