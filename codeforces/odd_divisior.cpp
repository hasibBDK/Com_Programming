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
         long long n;
         cin>>n;
         if(n&(n-1))
         cout<<"YES"<<endl;
         else
         cout<<"NO"<<'\n';
    }
    return 0;
}