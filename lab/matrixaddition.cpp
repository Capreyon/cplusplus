#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[3][3];
	for(int i=0;i<3;i++)
		for(int j=i;j<3;j++)
		{
			cin>>a[i][j]<<endl;
		}
		for(int i=0;i<3;i++)
		for(int j=i;j<3;j++)
		{
			cout<<a[i][j]<<endl;
		}	
}