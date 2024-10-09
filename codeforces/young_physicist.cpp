#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    
         int n;cin>>n;
         int A[100][100];
         int sum1=0,sum2=0,sum3=0;
         for(int i=0;i<n;i++)
         {
            for(int j=0;j<3;j++)
            {
                cin>>A[i][j];
            }
        
           sum1+=A[i][0];
           sum2+=A[i][1];
           sum3+=A[i][2];
         }

        if(sum1==0&&sum2==0&&sum3==0)
        {
            cout<<"YES"<<'\n';
        }
        else
        cout<<"NO"<<'\n';
    return 0;
}