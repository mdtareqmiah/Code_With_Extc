#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e8;
vector<bool> arr(N+1, 1);

void sieve() {
    arr[0] = arr[1] = 0;
    int lim = sqrt(N + 0.5);
    for (int i = 2; i <= lim; i++) {
        if (arr[i]) {
            for (ll j = i * i; j <= N; j += i) {
                arr[j] = 0;
            }
        }
    }
}

int main(){
    sieve();
    vector<int>v;
    for(ll i=2; i<=N; i++){
        if(arr[i]){
            v.push_back(i);
        }
    }
    for(int i=0; i<v.size(); i++){
        if(i%100==0){
            cout<<v[i]<<"\n";
        }
    }

}