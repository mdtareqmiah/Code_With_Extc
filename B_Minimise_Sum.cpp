#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ul unsigned long long
#define endl '\n'

void solve(){
    // your code here
    int n;
    cin>>n;
    vector<int>v(n);
    for(int &u:v) cin>>u;
    for(int i=0; i<n; i++){
        if(v[i]<v[i+1]+v[i]){
            cout<<v[i+1]<<"\n";
            break;
        }
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