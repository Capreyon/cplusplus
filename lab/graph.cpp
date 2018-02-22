#include<bits/stdc++.h>
using namespace std;
bool a[100][100];
void initialize()
{
	int i;
	for(i=0;i<100;i++)
	{
		for(int j=0;j<100;j++)
			a[i][j]=0;
	}
}
int main()
{
    int nodes,edges,i,j,x,y;
    initialize();
    cout<<"Enter the number of nodes and edges: ";
    cin>>nodes>>edges;
    for(i=0;i<edges;i++)
    {
    	cout<<"Enter the two nodes connected by this edges: "<<endl;
    	cin>>x>>y;
    	a[x][y]=1;
    	a[y][x]=1;
    }
    cout<<endl<<endl;
    cout<<"Node relation in linear form"<<endl<<endl;
    for(i=0;i<nodes;i++)
    {
    	cout<<"Node "<<i<<" is connected with :";
    	for(j=0;j<nodes;j++)
    	{
    	   
    	   if(a[i][j]==1)
    	   	 cout<<j<<" ";
    	}
    	cout<<endl;
    }
    cout<<endl<<endl;
    cout<<"Node relation in matrix form"<<endl<<endl;
    cout<<"  ";
    for(i=0;i<nodes;i++)
    	cout<<i<<" ";
    cout<<endl;
    for(i=0;i<nodes;i++)
    {
    	cout<<i<<" ";
    	for(j=0;j<nodes;j++)
    		cout<<a[i][j]<<" ";
        cout<<endl;

    }
    cout<<"enter the value:\n 1-Addition\n 2-Deletion\n";
    int z;
    cin>>z;
    switch(z    )
    case 1:addnode();
    //case 2:deletenode();
}
void addnode()
{
    cout<<"enter the node value";
    int n;
    cin>>n;
    cout<<"enter the node value through which it is connected";
    cin>>a;

}   
