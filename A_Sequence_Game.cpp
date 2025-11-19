#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(auto &i : v) cin >> i;
        sort(v.begin(), v.end());
        int x;
        cin >> x;
        if(v[0] <= x && v[n-1] >= x){
            cout << "YES\n";
        }else cout << "NO\n";
    }
}