#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n+1);
    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }

    while(m--){
        ll k, x;
        cin >> k >> x;
        v[k] = x;
        ll curSum = 0, mxSum = 0;
        for(int i = 1; i <= n; i++){
            curSum += v[i];
            if(curSum <= 0) curSum = 0;
            mxSum = max(mxSum, curSum);
        }
        cout << mxSum << endl;
    }

    return 0;
}