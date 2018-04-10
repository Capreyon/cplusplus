#include<bits/stdc++.h>
using namespace std;
class Graph
{
private:
    int V;    
    list<int> *adj;
    void DFSUtil(int v, bool visited[]);
public:
    Graph(int V);  
    void addEdge(int v, int w);     
    void BFS(int s);
    void DFS(int s);  
};
Graph::Graph(int x)
{
    V = x;
    adj = new list<int>[V];
} 
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}
void Graph::BFS(int s)
{
	cout<<"Result of Breadth First Traversal are:"<<endl;
    bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
        visited[i] = false;
    list<int> queue;    
    visited[s] = true;
    queue.push_back(s);   
    list<int>::iterator i;
    while(!queue.empty())
    {
        s = queue.front();
        cout << s << " ";
        queue.pop_front();    
        for (i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if (!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
}
void Graph::DFSUtil(int v, bool visited[])
{
    
    visited[v] = true;
    cout << v << " ";    
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited);
}
void Graph::DFS(int v)
{
	cout<<"Result of Depth First Traversal are: "<<endl;   
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;
       DFSUtil(v, visited);
}
int main()
{
   Graph g(7);
   g.addEdge(0,1);
   g.addEdge(0,2);
   g.addEdge(1,3);
   g.addEdge(1,4);
   g.addEdge(2,5);
   g.addEdge(2,6);
   cout<<"Enter the vertex on which you want to apply BFS: ";
   int elem;
   cin>>elem;
   g.BFS(elem);
   cout<<endl<<"Enter the vertex on which you want to apply DFS: ";
   int elem1;
   cin>>elem1;
   g.DFS(elem1);
   return 0;
}