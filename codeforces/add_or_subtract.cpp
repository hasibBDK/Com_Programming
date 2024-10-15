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
         long long int a,b;
         int k=0,l=0;
         cin>>a>>b;
         if(a==b)
         cout<<0<<endl;

         else if(a<b)
         {
            if((b-a)%2==0)
            cout<<2<<'\n';
            else
            cout<<1<<'\n';
         }
         else if(a>b)
         {
            if((a-b)%2==0)
            cout<<1<<'\n';
            else
            cout<<2<<'\n';
         }
    }
    return 0;
}