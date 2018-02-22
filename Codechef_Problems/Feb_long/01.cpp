#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char a[500000];
		cin>>a;
		int l;
		l=strlen(a);
		int sum,count=0;
		sum=a[0]+a[1]+a[2];
		for(int i=3;i<l;i++)
		{
			sum=sum+a[i];
			{
               if(sum==406 && a[i]*a[i-1]*a[i-2]*a[i-3]==106069392)
               	count++;
               	
           }
		sum=sum-a[i-3];
		}
		if(count>0)
			cout<<"lovely "<<count<<endl;
		else
			cout<<"normal"<<endl;
			
	}
}