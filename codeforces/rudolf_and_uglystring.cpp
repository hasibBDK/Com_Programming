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
         string s;
         cin>>s;
         int cnt =0;
         int discnt=0;
           for(int i=0;i<n-2;i++)
         
            {
                if((s[i]=='m')&&(s[i+1]=='a')&&(s[i+2]=='p'))
                cnt++;
                else if(s[i]=='p'&&s[i+1]=='i'&&s[i+2]=='e')
                cnt++;
            }

            for(int i=0;i<n-2;i++)
            {
                 if((s[i]=='m')&&(s[i+1]=='a')&&(s[i+2]=='p')&&s[i+3]=='i'&&s[i+4]=='e')
                 discnt++;
            }
            cout<<cnt-discnt<<'\n';
         
    }
    return 0;
}