#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}

vector<int> parent;

int findUPar(int node)
{
    if (parent[node] == node)
        return node;
    return parent[node] = findUPar(parent[node]);
}

signed main()
{
    int n, e;
    cin >> n >> e;

    vector<Edge> edgeList;
    parent.resize(n + 1);

    for (int i = 1; i <= n; i++)
        parent[i] = i;

    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edgeList.push_back(Edge(u, v, w));
    }

    vector<Edge> ans;
    sort(edgeList.begin(), edgeList.end(), cmp);

    for (auto val : edgeList)
    {
        int pu = findUPar(val.u);
        int pv = findUPar(val.v);

        if (pu != pv)
        {
            ans.push_back(val);
            parent[pu] = pv;
        }
    }

    for (auto x : ans)
    {
        cout << x.u << " " << x.v << " " << x.w << endl;
    }
}
