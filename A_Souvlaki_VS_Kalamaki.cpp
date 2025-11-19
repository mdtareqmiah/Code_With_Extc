#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    while(tc--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(auto &i : v) cin >> i;
        sort(v.begin(), v.end());
        bool flag=true;
        for(int i=1; i+1<n; i+=2){
            if(v[i]!=v[i+1]) flag=false;
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;

}