#include<bits/stdc++.h>
#define int long long int

using namespace std;


int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int res = 0;
        for(int i = 0; i < n; i++){
            int mask = 0;
            for(int j = 0; j < m; j++){
                int x;
                cin >> x;
                mask |= x;
            }
            res &= mask;
        }
        cout << (res > 0 ? "YES\n" : "NO\n");
    }
    return 0;
}