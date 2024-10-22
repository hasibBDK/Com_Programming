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
         vector<int>a(n);
         for(int i=0;i<n;i++)
         {
            cin>>a[i];
         }
         sort(a.begin(),a.end());
         int sum=0;
         vector<int>rearrange;
         int left =0,right = n-1;
         while(left<=right)
         {
            if(right>=left)
            rearrange.push_back(a[right--]);
            if(right>=left)
            rearrange.push_back(a[left++]);
         }
           
          vector<int>b(n),c(n);
          b[0]=rearrange[0];
          c[0]=rearrange[0];
          for(int i=1;i<n;i++)
          {
            b[i]=min(b[i-1],rearrange[i]);
            c[i]=max(c[i-1],rearrange[i]);
          }
          for(int i=0;i<n;i++)
          {
            sum+=(c[i]-b[i]);
          }

          cout<<sum<<'\n';
    }
    return 0;
}