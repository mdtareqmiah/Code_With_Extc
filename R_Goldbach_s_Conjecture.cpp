#include <bits/stdc++.h>
using namespace std;

const int sz = 1e7 + 5;
bitset<sz> arr;

void sieve() {
    arr.set();           
    arr[0] = arr[1] = 0; 
    int lim = sqrt(sz + 0.5);
    for (int i = 2; i <= lim; i++) {
       // if (arr[i]) {
            for (int j = i * i; j < sz; j += i) {
                arr[j] = 0;
            }
        //}
    }
}

int main() {
    sieve();

    // for (int i = 2; i <= 100; i++) {
    //     if (arr[i]) cout << i << " ";
    // }
    // cout << endl;
    vector<int>v;
    for(int i=2; i<=sz; i++){
        if(arr[i]){
            v.push_back(i);
        }
    }
    int n;
    cin>>n;
    // cout<<v[n-1];

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    return 0;
}

// Prime generation


// #include<bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define db long double
// #define vii vector<ll>
// #define pll pair<ll, ll>
// #define F first
// #define S second


// const ll N = (ll) 1e8 + 5;
// const ll mod = (ll) 1e9 + 7;
// const ll inf = (ll) 1e18;



// bitset<N> isPrime;
// //isPrime[i] = 1 means prime
// //isPrime[i] = 0 means composite


// int main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     int t = 1;
//     cin >> t;
//     while(t--) {
//         int n = 100;
        
//         // Assume all odd numbers are prime
//         for(int i = 3; i <= n; i += 2) {
//             isPrime[i] = 1;
//         }
        
//         // 2 is the only even prime
//         isPrime[2] = 1; 
        
//         // Checking needed only till square root of n
//         // +2 because of avoiding any chance of precession error
//         int sq = sqrt(n) + 2;
        


//         for(int i = 3; i <= sq; i += 2) {

//             // For example, if a number 24 is divisible by 6, it's already divisible by 3 (a smaller prime factor)
//             // So no need to check with a number which is not prime
//             if(isPrime[i] == 0) {
//                 continue;
//             }

//             for(int j = i * i; j <= n; j += 2 * i) {
//                 isPrime[j] = 0;
//             }
//         }
        
//         for(int i = 1; i <= n; i++) {
//             if(isPrime[i] == 1) {
//                 cout << i << "\n";
//             }
//         }

//     }
// }