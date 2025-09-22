#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;

        int x=0;
        for(char c:s) if(c=='1') x++;

        int y=n-x;

        int p=0;

        for(int i=0; i<y; i++){
            if(s[i]=='1') p++;
        }
        cout<<p<<"\n";


    }
    return 0;
}
