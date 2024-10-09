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
         int A[a][b];
         for(int i=0;i<a;i++)
         {
            for(int j=0;j<b;j++)
            {
                cin>>A[i][j];
            }
         }
    }
    return 0;
}