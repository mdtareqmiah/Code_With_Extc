#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        int n; ll k;
        cin >> n >> k;
        vector<ll> v1(n+1);
        ll total = 0;
        for (int i = 1; i <= n; i++) {
            cin >> v1[i];
            total += v1[i];
        }

        vector<vector<int>> g(n+1);
        vector<pair<int,int>> edges;
        for (int i = 0; i < n-1; i++) {
            int u,v; cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
            edges.push_back({u,v});
        }

        vector<int> p1(n+1,0), order;
        order.reserve(n);
        p1[1] = -1;
        stack<int> st; st.push(1);
        while(!st.empty()){
            int u = st.top(); st.pop();
            order.push_back(u);
            for(int v: g[u]) if(v!=p1[u]){
                p1[v]=u;
                st.push(v);
            }
        }

        vector<ll> sum1(n+1,0);
        for(int i=n-1;i>=0;i--){
            int u = order[i];
            sum1[u]+=v1[u];
            if(p1[u]>0) sum1[p1[u]]+=sum1[u];
        }

        int m = edges.size();
        vector<ull> v2(m);
        for(int i=0;i<m;i++){
            int u=edges[i].first, v=edges[i].second;
            int child = (p1[u]==v?u:(p1[v]==u?v:u));
            ll s = sum1[child];
            ll other = total - s;
            unsigned long long prod = (unsigned long long)(s * other);
            v2[i] = prod;
        }

        vector<ull> vals;
        vals.reserve(m+1);
        vals.push_back(0);
        for(auto d: v2) vals.push_back(d);
        sort(vals.begin(), vals.end());
        vals.erase(unique(vals.begin(), vals.end()), vals.end());

        auto flag = [&](ull X)->bool{
            vector<vector<int>> adj(n+1);
            vector<int> deg(n+1,0);
            for(int i=0;i<m;i++){
                if(v2[i] > X){
                    int u=edges[i].first,v=edges[i].second;
                    adj[u].push_back(v);
                    adj[v].push_back(u);
                    deg[u]++; deg[v]++;
                }
            }
            vector<char> v3(n+1,0);
            ll need=0;
            for(int i=1;i<=n;i++){
                if(deg[i]>0 && !v3[i]){
                    int leaf=0;
                    stack<int> st2; st2.push(i); v3[i]=1;
                    while(!st2.empty()){
                        int u=st2.top(); st2.pop();
                        if(deg[u]==1) leaf++;
                        for(int v: adj[u]) if(!v3[v]){
                            v3[v]=1; st2.push(v);
                        }
                    }
                    need += (leaf+1)/2;
                    if(need > k) return false;
                }
            }
            return need<=k;
        };

        int L=0, R=(int)vals.size()-1, ansIdx=R;
        while(L<=R){
            int mid=(L+R)/2;
            if(flag(vals[mid])){
                ansIdx=mid;
                R=mid-1;
            } else L=mid+1;
        }
        cout<<vals[ansIdx]<<"\n";
    }
}
