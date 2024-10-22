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
         int a[n];
         int sum=0;
         for(int i=0;i<n;i++)
         {
            cin>>a[i];
            sum=sum+abs(a[i]);
         }

         cout<<sum<<'\n';

    }
    return 0;
}