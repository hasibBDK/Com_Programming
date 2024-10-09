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
         int a,b,c;
         cin>>a>>b>>c;
         int val1 = abs(a-1);
         int val2 = abs(b-c)+(c-1);

         if(val1==val2)
         cout<<2<<endl;
         else if(val2<val1)
         cout<<2<<endl;
         else
         cout<<1<<endl;
    }
    return 0;
}