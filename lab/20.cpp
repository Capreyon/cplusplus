 #include<iostream>
     #include <vector>

    using namespace std;

    vector <int> a;

    int main()
    {
        int x, y, nodes, edges,i;
        cin >> nodes;       //Number of nodes
        cin >> edges;       //Number of edges
        for(i = 0;i < edges;++i)
        {
                cin >> x >> y;
            a[x].push_back(y);        //Insert y in adjacency list of x
         }
        int q;
        cin>>q;
        for(i=0;i<q;i++)
        {
            cin>>d>>e;
            if(a[d][e]!=0)
                cout<<"YES";
            else
                cout<<"NO";
        }
    }
    return 0;
    }