#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+5;
bitset<N> isPrime;

void sieve(){
    isPrime[2] = 1;
    for(int i = 3; i < N; i++){
        isPrime[i] = 1;
    }

    int sq = sqrt(N) + 5;
    for(int i = 3; i < sq; i += 2){
        if(isPrime[i] == 0) continue;
        for(int j = i * i; j < N; j += 2 * i) isPrime[j] = 0;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v;
        set<int> st;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            st.insert(x);
        }
        for(auto a : st) v.push_back(a);

        bool isFind = false;
        n = v.size() - 1;
        sort(v.begin(), v.end());
        int l = 0, r = 1;
        while(l < n){
            int x = v[r] % v[l];
            if(x % 2 == 0){
                cout << v[l] << " " << v[r] << endl;
                isFind = true;
                break;
            }
            r++;
            if(r > n) {
                l++;
                r = l + 1;
            }
        }

        if(!isFind) cout << "-1\n";
        

    }
}