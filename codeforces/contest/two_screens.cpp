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
         string s,t;
         cin>>s>>t;
         int p=0;
         int r=0;
         for(int i=0;i<t.size();i++)
         {
            if(s[i]==t[i])
            {
                p++;
                r=1;
            }
            else
            {
                break;
            }
         }

         cout<<s.size()+t.size()-p+r<<'\n';
    }
    return 0;
}