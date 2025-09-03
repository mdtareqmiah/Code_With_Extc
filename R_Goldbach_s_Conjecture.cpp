#include <bits/stdc++.h>
using namespace std;

const int sz = 1e7 + 5;
bitset<sz> arr;


void sieve() {
    arr.set();           
    arr[0] = arr[1] = 0; 
    int lim = sqrt(sz + 0.5);
    for (int i = 2; i <= lim; i++) {
        for (int j = i * i; j < sz; j += i) {
            arr[j] = 0;
        }
    }
}

int main() {
    sieve();

    
    int n;
    while(cin>>n&&n){
        for(int i=2; i<=n; i++){
            if(arr[i]==1 && arr[n-i]==1){
                cout<<n<<" = "<<i<<" + "<<n-i<<"\n";
                break;
            }
        }
    }
    
    return 0;
}

