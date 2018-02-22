#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,i,j;
    cout<<"Enter the number of lines to be printed";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<setw(2*n+1-2*i);
        for(j=1;j<=i;j++) 
        {
            cout<<j%10;
            cout<<" ";
        }
        for(j=(i-1);j>=1;j--)
        {
            cout<<j%10;
            cout<<" ";
        }
        cout<<endl;
    }
}
