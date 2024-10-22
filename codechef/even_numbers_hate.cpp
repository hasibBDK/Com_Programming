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
         int n;
         cin>>n;
         int k[n];
         for(int i =0;i<n;i++)
         {
            cin>>k[i];
         }
         int odd=0,even=0;

         for(int i=0;i<n;i++)
         {
            if(k[i]%2==0)
            even++;
            else
            odd++;
         }

         int p=odd-1;
         int q=p/2;
         int out = even+1+q;

         if(odd==0)
         {
            cout<<0<<'\n';
         }
         else if(even==0)
         {
            cout<<odd/2<<'\n';
         }
         else if(even>=1&&odd>=1)
         {
            cout<<out<<'\n';
         }
    }
    return 0;
}