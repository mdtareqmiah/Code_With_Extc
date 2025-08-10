#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ul unsigned long long
#define endl '\n'

void solve(){
    // your code here
    int n;
    string s;
    cin>>n>>s;
    int x=0, y=0;
    for( char c:s){
        if(c=='(') x++;
        else x--;

        y=min(y,x);
    }
    cout<<-y<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}