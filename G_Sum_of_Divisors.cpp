#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll MOD = 1e9 + 7;


ll solve(ll l, ll r) {
    ll cnt = r - l + 1;
    return ((cnt % MOD) * ((l + r) % MOD) % MOD) * 500000004 % MOD; 
}

int main() {
    ll n;
    cin >> n;

    ll ans = 0;
    ll i = 1;

    while (i <= n) {
        ll k = n / i;              
        ll j = n / k;              
        ll x = solve(i, j); 
        ans = (ans + (x * k) % MOD) % MOD;
        i = j + 1;
    }

    cout << ans << endl;
    return 0;
}
