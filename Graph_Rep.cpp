#include<bits/stdc++.h>
using namespace std;
bool x[1005][1005];
void initialiser(int n)
{
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
        x[i][j]=false;
    }
}
}
int main()
{
    int n,m;
    cin>>n>>m;
    initialiser(n);
    int a,b;
    int i,j;
    for(i=1;i<=m;i++)
    {
        cin>>a>>b;
        x[a][b]=x[b][a]=true;
    }
    int q;
    cin>>q;
    for(i=1;i<=q;i++)
    {
        cin>>a>>b;
        if(x[a][b]==true)
        cout<<"yes\n";
        else 
        cout<<"no\n";
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
          cout<<j<<" ";
          cout<<x[i][j];
        }
        cout<<i<<" "<<endl;
    }
    
    
}