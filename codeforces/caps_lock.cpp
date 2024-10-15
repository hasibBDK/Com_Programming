#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    
    string s;
    cin>>s;
    int l=0,u=0;
    for(int i=1;i<s.length();i++)
    {
        if(islower(s[i]))
        {
            l++;
        }
    }

    for(int i=0;i<s.length();i++)
    {
        if(islower(s[i]))
        {
            u++;
        }
    }


    if(islower(s[0])&&l==0)
    {
        s[0]=toupper(s[0]);
        for(int i=1;i<s.length();i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s<<'\n';
    }
    else if(u==0)
    {
        for(int i=0;i<s.length();i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s<<'\n';
    }

    else
    cout<<s<<'\n';
    
    

    
    return 0;
}