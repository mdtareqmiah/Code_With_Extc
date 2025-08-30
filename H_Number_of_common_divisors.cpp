#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e6+5;
vector<int>dibc(N,0);

void dibo(){
    for(int i=1; i<N; i++){
        for(int j=i; j<N; j+=i){
            dibc[j]++;
        }
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    dibo();
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int x= __gcd(a,b);
        cout<<dibc[x]<<"\n";
    }
    return 0;
}
