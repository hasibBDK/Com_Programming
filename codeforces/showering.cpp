#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
         int n,s,m;
         cin>>n>>s>>m;
         int aa=0,ab=0,ac=0;
         int diff = -100;
         for(int i=1;i<=n;i++)
         {
            int l,r;
            cin>>l>>r;
            aa=l-ab;
            ab=r;
            diff = max(diff,aa);
         }
         ac=m-ab;
         diff=max(diff,ac);
         if(diff>=s)
         cout<<"YES"<<'\n';
         else
         cout<<"NO"<<'\n';
    }
    return 0;
}