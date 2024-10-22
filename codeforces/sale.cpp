#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    
    int n,m;cin>>n>>m;
    int k[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>k[i];
        if(k[i]<0)
        {
            sum+=abs(k[i]);
        }
    }
    cout<<sum<<'\n';
    return 0;
}
//uncompleted