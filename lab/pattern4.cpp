#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,i,k;
    cout<<"Enter the number of lines to be printed ";
    cin>>n;
    for(i=1;i<n;i++)
    {
        cout<<setw(2*n+1-2*i);
        cout<<"1";
       
        int j=i-1;
        if(i!=1)
        {
       cout<<setw(4*j);
        cout<<"1";
        cout<<" ";
        }
        cout<<endl;
    

    }
    if(i==n)
    {
      k=1;
      while(k<(2*n))
      {
        cout<<"1";
        cout<<" ";
        k++;
      }
    }
    cout<<endl;
}
