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
        int n;cin>>n;
        int min_room = INT_MAX;
         int room_no[200],time[200];
         for(int i=0;i<n;i++)
         {
           cin>>room_no[i];
            cin>>time[i];

            if(time[i]%2==0)
            {
                min_room=min(min_room,(room_no[i]+(time[i]-2)/2));
            }

            else
            min_room=min(min_room,(room_no[i]+time[i]/2));
         }

         cout<<min_room<<'\n';
    }
    return 0;
}