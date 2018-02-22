#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,i,k;
    cout<<"Enter the number of lines to be printed ";
    cin>>n;
    for(i=1;i<n;i++)
    {
        cout<<setw(n-i+1);
        cout<<"1";
       
        int j=i-1;
        if(i!=1)
        {
       cout<<setw(2*j);
        cout<<"1";
        }
        cout<<endl;
    

    }
    if(i==n)
    {
      k=1;
      while(k<(2*n))
      {
        cout<<"1";
        
        k++;
      }
    }
    cout<<endl;
}
