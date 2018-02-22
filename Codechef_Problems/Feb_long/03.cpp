#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		int a[n];
		long long int i;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		long long int c,d,s;
		cin>>c>>d>>s;
		long long int t1;
		long long int p=0;
		for(i=n-1;i>0;i--)
		{
			if(a[i]>a[i-1])
		      p=p+(a[i]-a[i-1]);
		}
			t1=(c-1)*(p+a[0]);
			cout<<t1<<endl;

		

	}
}