#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> priems(int x) {
    vector<char> is(x+1, true);
    is[0]=is[1]=false;
    vector<int> primes;
    for(int i=2;i<=x;i++){
        if(is[i]){
            primes.push_back(i);
            if ((ll)i*i <= x)
                for(int j=i*i;j<=x;j+=i) is[j]=false;
        }
    }
    return primes;
}

vector<pair<int,int>> ff(int x, const vector<int>& primes) {
    vector<pair<int,int>> res;
    int tmp = x;
    for(int p: primes){
        if((ll)p * p > tmp) break;
        if(tmp % p == 0){
            int e = 0;
            while(tmp % p == 0){
                tmp /= p;
                ++e;
            }
            res.emplace_back(p, e);
        }
    }
    if(tmp > 1) res.emplace_back(tmp, 1);
    return res;
}

void xdib(const vector<pair<int,int>>& pf, int idx, ll cur, vector<int>& out) {
    if(idx == (int)pf.size()){
        out.push_back((int)cur);
        return;
    }
    ll p = pf[idx].first;
    int e = pf[idx].second;
    ll val = 1;
    for(int i=0;i<=e;i++){
        xdib(pf, idx+1, cur * val, out);
        val *= p;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> primes = priems(100000); 

    int T;
    if(!(cin >> T)) return 0;
    unordered_map<int, vector<int>> divisors_cache;
    divisors_cache.reserve(1<<16);

    while(T--){
        int n; cin >> n;
        vector<int> a(n);
        int maxA = 0;
        for(int i=0;i<n;i++){ cin >> a[i]; if(a[i]>maxA) maxA=a[i]; }

        unordered_map<int,int> freq;
        freq.reserve(n*2);
        for(int v: a) freq[v]++;

        unordered_map<int,ll> cnt;
        cnt.reserve( (int)freq.size() * 8 );

        int need = max(1, n - 2); 
        int ress = 1; 
        for(auto &p : freq){
            int val = p.first;
            int f = p.second;
            auto it = divisors_cache.find(val);
            vector<int> divs;
            if(it != divisors_cache.end()){
                divs = it->second;
            } else {
                auto pf = ff(val, primes);
                xdib(pf, 0, 1LL, divs);
               
                divisors_cache.emplace(val, divs);
            }
            for(int d: divs){
                ll newc = (cnt[d] += f);
                if(newc >= need) {
                    if(d > ress) ress = d;
                }
            }
        }

        cout << ress << '\n';
    }
    return 0;
}
