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
         int n,a,b;
         cin>>n>>a>>b;
       
        int cost1 = n*a;
        int cost2 =INT_MAX;
        int cost3 =INT_MAX;

        if(n%2==0)
        {
            cost2 = (n/2) * b;
        }

        else{
            cost3 = (n/2)*b + a;
        }
        
        int final = min({cost1,cost2,cost3});
        cout<<final<<endl;

    }
    return 0;
}