#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<pair<int,int>> adj[N];
vector<bool> visited(N);

class Edge
{
    public :  
        int u,v,w;
        Edge(int u,int v,int w)
        {
            this->u = u;
            this->v = v;
            this->w = w;
        }
};

class cmp
{
    public : 
        bool operator()(Edge a,Edge b)
        {
            return a.w > b.w;
        }
};

void prims(int src)
{
    priority_queue<Edge,vector<Edge>,cmp> pq;
    pq.push(Edge(src,src,0));

    vector<Edge> edgeList;

    while(!pq.empty())
    {
        auto current = pq.top();
        int u = current.u,v = current.v,w = current.w;
        pq.pop();

        if(visited[v]) continue;

        visited[v] = true;
        edgeList.push_back(current);

        for(auto x : adj[v])
        {
            int node = x.first, cost = x.second;
            if(!visited[node])
            {
                pq.push(Edge(v,node,cost));
            }
        }
    }

    int sum =0;
    for(auto x : edgeList)
    {
        cout << x.u << " " << x.v << " " << x.w << endl;
        sum+=x.w;
    }
    cout<<"Cost ="<<sum<<'\n';
}

signed main() {
    int n,e;cin >> n >> e;
    
    while(e--) {
        int u,v,w;cin >> u >> v >> w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    
    prims(0);
    return 0;
}
