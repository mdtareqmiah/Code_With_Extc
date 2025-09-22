#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() 
{
    ll t = 1;
    cin >> t;
    while (t--){
        ll l1, b1, l2, b2, l3, b3;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
        if ( b1 == b2+b3 && l2 == l3 && b1 == l1+l2 ) cout << "YES\n";
        else if ( l1 == l2+l3 && b2 == b3 && l1 == b1+b2 ) cout << "YES\n";
        else if ( b1 == b2 && b2 == b3 && b1 == l1+l2+l3 ) cout << "YES\n";
        else if ( l1 == l2 && l2 == l3 && l1 == b1+b2+b3 ) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}