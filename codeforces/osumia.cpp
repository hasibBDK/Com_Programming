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
         string str[10000];
         int n;cin>>n;
         for(int i=1;i<=n;i++)
         {
            cin>>str[i];
         }

         for(int i=n;i>=1;i--)
         {
            cout<<str[i].find("#")+1<<'\n';
         }
    }
    return 0;
}