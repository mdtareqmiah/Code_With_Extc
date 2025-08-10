#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ul unsigned long long
#define endl '\n'

void solve(){
    // your code here
    int x,y;
    cin>>x>>y;
    if((x+y)%2==0){
        cout<<"Bob\n";
    }
    else{
        cout<<"Alice\n";
    }
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