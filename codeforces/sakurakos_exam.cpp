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
         int a,b;
         cin>>a>>b;
         int out = a*1+b*2;
         if((a==0&&b%2!=0)||(a%2!=0&&b==0))
         {
            cout<<"NO"<<'\n';
         }

         else if(out%2!=0)
         {
            cout<<"NO"<<'\n';
         }
         else if(out%2==0)
         cout<<"YES"<<'\n';
    }
    return 0;
}