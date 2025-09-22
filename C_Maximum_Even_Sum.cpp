#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll solve(ll a, ll b) {
    ll res = -1;

    ll temp = b;
    ll pow2 = 1;
    while(temp % 2 == 0) {
        temp /= 2;
        pow2 *= 2;
    }
    ll d = temp;
    ll x = pow2;
    ll k = d;
    while(k<=b) {
        ll s=a * k + b / k;
        if(s % 2==0) res = max(res, s);
        if(k > b/2) break; 
        k*=2;
    }

    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--) {
        ll a,b;
        cin>>a>>b;

        cout<<solve(a, b)<<"\n";
    }
    return 0;
}
