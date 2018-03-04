#include<bits/stdc++.h>
using namespace std;
vector<int>a[100];

void display(int nodes)
{
    int i,j;
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
    //for(i=0;i<nodes;i++)
    //{
    	////cout<<"Node "<<i<<" is connected with :";
    	//for(j=0;j<a[i].size();j++)
    	//{
    		//cout<<a[i][j]<<" ";
    	//}
    	//cout<<endl;
    	//cout<<a[i].size()<<endl;
    //}
    display(nodes);
    cout<<"Do you want to add any element (y/n)";
    char ch;
    cin>>ch;
    if(ch!='n')
    {
        cout<<"Enter the two nodes which this edge will connect:";
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
        display(nodes+1);
    }
    cout<<"Do you want to delete a node (y/n)";
    char ch1;
    cin>>ch1;
    if(ch1!='n')
    {
        cout<<"Enter the two nodes which this edge will connect:";
        cin>>x>>y;
        a[x].pop_back();
        a[y].pop_back();
        display(nodes-1);
    }
}