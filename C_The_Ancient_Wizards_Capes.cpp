#include <bits/stdc++.h>
using namespace std;
#define MOD 676767677

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        vector<int> L(n), R(n);
        bool possible = true;

        for(int i=0;i<n;i++){
            L[i] = max(0, i - (a[i]-1));
            R[i] = min(n-1, i + (a[i]-1));
        }

        for(int i=1;i<n;i++) L[i] = max(L[i], L[i-1]);
        for(int i=n-2;i>=0;i--) R[i] = min(R[i], R[i+1]);

        for(int i=0;i<n;i++){
            if(L[i] > R[i]){
                possible = false;
                break;
            }
        }

        if(!possible){
            cout << 0 << "\n";
            continue;
        }

        long long res = 1;
        for(int i=0;i<n;i++){
            // if wizard i can choose freely (exact logic depends on overlapping intervals)
            if(a[i]==1) res = (res*2)%MOD;
        }
        cout << res << "\n";
    }
    return 0;
}
