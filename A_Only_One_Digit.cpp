#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, a;
        cin >> n;
        int m = INT_MAX;

        while (n != 0){
            a = (n % 10);
            m = min(m, a);
            n = (n - (n % 10)) / 10;
        }
        cout << m << endl;
    }
}