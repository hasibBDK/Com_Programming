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
         int A[n];
         for(int i=0;i<n;i++)
         {
            cin>>A[i];
         }

         int sum=0;
         int odd=0;
         int even=0;

         int k=0;
         for(int i=0;i<n;i++)
         {

            
            sum+=A[i];

            if(A[i]%2==1)
            odd++;
            else
            even++;
            
         }


         if(sum%2==1)
         cout<<"YES"<<'\n';
         else
         {
            if(odd>=1&&even>=1)
            cout<<"YES"<<'\n';
            else
            cout<<"NO"<<'\n';
         }
         
    }
    return 0;
}