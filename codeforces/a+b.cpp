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
         int n;cin>>n;
         int sum=0;
         while(n!=0)
         {
            sum+=n%10;
            n=n/10;
         }
         cout<<sum<<'\n';
    }
    return 0;
}