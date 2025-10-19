#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin>>t;
    while(t--) {
        int n; cin >> n;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        unordered_map<ll,int> cnt;
        cnt.reserve(n*2);
        for(ll v: a) cnt[v]++;

        vector<ll> pairs; 
        unordered_map<ll,int> pair_cnt;
        pair_cnt.reserve(cnt.size()*2);
        for(auto &p: cnt){
            ll val = p.first;
            int c = p.second;
            int pc = c/2;
            pair_cnt[val] = pc;
            for(int i=0;i<pc;i++) pairs.push_back(val);
        }
        if(pairs.empty()){
            cout << 0 << '\n';
            continue;
        }

        sort(pairs.begin(), pairs.end(), greater<ll>()); 
        ll sum_pairs = 0;
        for(ll v: pairs) sum_pairs += v;
        int P = (int)pairs.size();

        ll ans = 0;

        if(P >= 2) {
            ans = max(ans, 2 * sum_pairs);
        }

        ll largest_pair = (P>=1 ? pairs[0] : 0);
        ll second_largest_pair = (P>=2 ? pairs[1] : 0);

        for(auto &p: cnt) {
            ll c = p.first;
            int original_cnt = p.second;
            bool must_sacrifice_pair = (original_cnt % 2 == 0);
            if(must_sacrifice_pair && pair_cnt[c] == 0) continue;

            int pairs_after = P - (must_sacrifice_pair ? 1 : 0);
            if(pairs_after < 1) continue; // odd polygon needs at least one pair

            ll sum_pairs_after = sum_pairs - (must_sacrifice_pair ? c : 0);
            ll perimeter = 2 * sum_pairs_after + c;

            ll max_pair_after;
            if(!must_sacrifice_pair) {
                max_pair_after = largest_pair;
            } else {
                if(pair_cnt[c] >= 2) {
                    max_pair_after = largest_pair;
                } else {
                    if(largest_pair == c) max_pair_after = second_largest_pair;
                    else max_pair_after = largest_pair;
                }
            }

            ll max_side = max(c, max_pair_after);
            if(perimeter > 2 * max_side) {
                ans = max(ans, perimeter);
            }
        }

        cout << ans << '\n';
    }
    return 0;
}
