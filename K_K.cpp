#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;
    vector<ll>v(n), a(n);
    for(auto &u:v) cin>>u;
    a = v;
    sort(a.begin(), a.end());

    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i] != v[i]) {
            cnt++;
            if(cnt > 2) break;
        }
    }
    if(cnt > 2){
        cout << "Failed\n";
    }else{
        cout << "Sorted\n";
    }
}