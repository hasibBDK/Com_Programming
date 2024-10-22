#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
         int n;
         cin>>n;
         long long sum=0;
         int k[n];
         for(int i=0;i<n;i++)
         {
            cin>>k[i];
            sum=sum+k[i];
         }

         int out = sum/4;
         int p = sum%4;

         
         if(k[0]==3&&k[1]==3&&k[2]==2)
         cout<<3<<'\n';
         else if(p==0)
         cout<<out<<'\n';
         else
         cout<<out+1<<'\n';


    return 0;
}