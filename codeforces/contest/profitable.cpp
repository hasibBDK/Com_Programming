#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        if(b >= a * 2) {
            cout << 0 << endl;
            continue;
        }
        if(a>=b){
            cout<<a<<endl;
        }else{
            cout << a - (b - a) << endl;
        }
    }
}