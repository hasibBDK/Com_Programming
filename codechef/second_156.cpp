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
         int flag=0;
         int cnt=0;
         int a[n];
         for(int i=0;i<n;i++)
         {
            cin>>a[i];
         }
         int k = a[n-1];
         double y = k/2.0;

        for(int i=n-2;i>=0;i--)
        {
            if(a[i]<=y)
            {
                cnt++;
            }
            else
            {
                flag=i;
                break;
            }
            
        }

        if(cnt==(n-1))
        {
            cout<<1<<'\n';
        }
        else
        cout<<flag+2<<'\n';
    }
    return 0;
}