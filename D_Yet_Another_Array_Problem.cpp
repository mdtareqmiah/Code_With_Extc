#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
const int lim = 200000;
vector<int> primes;


int main(){

    vector<char> store(lim+1, 0);
    for (int i = 2; i <= lim; ++i) {
        if (!store[i]) {
            primes.push_back(i);
            if ((long long)i * i <= lim)
                for (int j = i*i; j <= lim; j += i) {
                    store[j] = 1;
                }
        }
    }

    int t;
    cin>>t;

    while (t--) {
        int n; 
        cin >> n;
        ull x = 0;
        for (int i = 0; i < n; i++) {
            ull a; 
            cin>>a;
            if (i == 0){
                x = a;
            } 
            else {
                x = __gcd(x, a);
            }
        }

        long long res = -1;
        for (int p: primes) {
            if ((ull)p > x) { 
                res = p;
                break;
            }
            if (x % p != 0) {
                res = p; break;
            }
        }

  
        if (res == -1) {
            if (x == 1) res = 2;
            else {
                
                long long ct = lim + 1;
                auto isPrime = [&](long long x)->bool{
                    if (x < 2) return false;
                    for (long long p: primes) {
                        if ((long long)p * p > x) {
                            break;
                        }
                        if (x % p == 0) {
                            return false;
                        }
                    }
                    return true;
                };
                while (true) {
                    if (isPrime(ct) && (x % (ull)ct != 0)) {
                        res = ct; break; 
                    }
                    ct++;
                }
            }
        }

        cout << res << "\n";
    }

    return 0;
}
