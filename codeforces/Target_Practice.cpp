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
         int num=0;
         char s;
         for(int i=1;i<=10;i++)
         {
            for(int j=1;j<=10;j++)
            {
                cin>>s;
                if(s=='X')
                {
                    num+=min(min(i,10-i+1),min(j,10-j+1));
                }
            }
         }

        

         
         cout<<num<<'\n';
    }
    return 0;
}