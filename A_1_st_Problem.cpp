#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int bigMod(int x, int y){
    ll res = 1;
    while(y > 0){
        if(y % 2 == 1) res = res * x;
        x *= x;
        y /= 2;
    }
    return res;
}

int main(){
    int t = 1;
    //cin >> t;

    int n, m;
    while(cin>>n>>m){
        
            ll res = 0;
            for(int i = 1; i <= n; i++){
                res += i * bigMod(m, i);
            }
            cout << res << endl;
        

    }

}

