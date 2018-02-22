#include<bits/stdc++.h>
using namespace std;
vector<int>a[100];
int main()
{
	int nodes,edges,x,y,i,j;
    cout<<"Enter the number of nodes and edges: ";
    cin>>nodes>>edges;
    for(i=0;i<edges;i++)
    {
    	cout<<"Enter the two nodes connected by this edges: "<<endl;
    	cin>>x>>y;
    	a[x].push_back(y);
    	a[y].push_back(x);
    }
    for(i=0;i<nodes;i++)
    {
    	cout<<"Node "<<i<<" is connected with :";
    	for(j=0;j<a[i].size();j++)
    	{
    		cout<<a[i][j]<<" ";
    	}
    	cout<<endl;
    	//cout<<a[i].size()<<endl;
    }
}