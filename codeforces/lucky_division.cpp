#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin >> t;
    
    if(t%4==0||t%7==0||t%47==0||t%744==0||t%477==0)
    cout<<"YES"<<'\n';
    else
    cout<<"NO"<<'\n';
    return 0;
}