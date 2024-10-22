#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    set<int>s;
    s.insert(9);
    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(1);
    s.insert(9);
    s.insert(5);
    s.insert(6);
    s.insert(7);
    for(int x:s)
    {
        cout<<x<<' ';
    }
    return 0;
}