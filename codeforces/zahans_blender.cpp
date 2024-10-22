#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    int a,b;cin>>a>>b;
    int out =0;
    int mod = 0;
    if(a<=b)
    {
        out = n/a;
        mod=n%a;
        if(mod>0)
        out+=1;      
    }
    else
    {
        out = n/b;
       int mod = n%b;
       if(mod>0)
       {
        out+=1;
       }
    }
    cout<<out<<'\n';
    
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
         solve();
    }
    return 0;
}
