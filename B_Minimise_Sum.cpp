#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ul unsigned long long
#define endl '\n'

void solve(){

    int n;
    cin>>n;
    vector<int>v(n);
    for(int &u:v) cin>>u;
    if(v[0] > v[1]){
        cout << v[0] + v[1] << endl;
    }else{
        cout << 2 * min(v[0], v[1]) << endl;
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