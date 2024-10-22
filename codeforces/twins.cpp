#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin >> t;
    int k[t];
    for(int i=1;i<=t;i++)
    {
        cin>>k[i];
    }
    int l=t/2;
    int m=t/2;
    int sum1=0;
    int sum2=0;
    for(int i=1;i<=t/2;i++)
    {
        sum1+=k[i];
    }
    for(int i=t/2+1;i<t;i++)
    {
        sum2+=k[i];
    }
    int cnt=0;
    if(sum1<sum2)
    {
        for(int i=t/2+1;i<t;i++)
        {
            sum1+=k[i];
            cnt++;
            if(sum1>sum2)
            break;
        }
    }
    return 0;
}