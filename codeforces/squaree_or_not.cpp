#include<bits/stdc++.h>
using namespace std;
#define long long ll;


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
         string s;
         int cnt=0;
         for(int i=0;i<n;i++)
         {
            cin>>s[i];
         }

         int k = sqrt(n);
         if(k*k==n)
         {
            for(int i=0;i<n;i++)
            {
                if(s[i]=="0")
                cnt++;
            }
         }

         if(((k*k==n)&&cnt>=1)||n==4)
         {
            cout<<"YES"<<endl;
         }
         
         else
         {
            cout<<"NO"<<endl;
         }
    }
    return 0;
}