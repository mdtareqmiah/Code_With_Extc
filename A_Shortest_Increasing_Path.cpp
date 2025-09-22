// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main(){
    
//     int t;
//     if(!(cin >> t)) return 0;
//     while(t--){
//         ll x,y;
//         cin >> x >> y;
//         ll sum1 = x + y;
//         long double disc = sqrt((long double)8*sum1 + 1.0L);
//         ll mx = (ll)((disc - 1.0L) / 2.0L);

//         while((mx+1)*(mx+2)/2 <= sum1) mx++;
//         while(mx*(mx+1)/2 > sum1) mx--;

//         int ans = -1;

//         for(ll i = 2; i <= mx; ++i){
//             ll a = (i + 1) / 2;
//             ll b = i / 2;       
//             ll s = i*(i+1)/2;
//             if(s > sum1) break;
//             ll d = sum1 - s;
//             ll p = a * a;
//             ll q = b * (b + 1);
//             ll rx = x - p;
//             ll ry = y - q;
//             if(rx < 0 || ry < 0) continue; 

//             ll mnn, mxx;
//             if(i % 2 == 0){
//                 mnn = 0;
//                 mxx = d / 2;
//             } else {

//                 mnn = (d + 1) / 2; 
//                 mxx = d;
//             }
//             if(rx >= mnn && rx <= mxx){
//                 ans = (int)i;
//                 break;
//             }
//         }
//         cout << ans << '\n';
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll x, y;
        cin >> x >> y;
        ll target = x + y;

        // Find minimal k such that k*(k+1)/2 >= target
        long double disc = sqrtl((long double)8 * target + 1);
        ll k = (ll)ceil((disc - 1) / 2);

        int ans = -1;
        while (true) {
            ll S = k * (k + 1) / 2;
            if (S < target) {
                k++;
                continue;
            }
            if ((S - target) % 2 != 0) {
                k++;
                continue;
            }

            // max sum for x = sum of odd steps = ceil(k/2)^2
            ll maxX = ( (k + 1) / 2 ) * ( (k + 1) / 2 );
            // max sum for y = sum of even steps = (k/2)*(k/2+1)
            ll half = k / 2;
            ll maxY = half * (half + 1);

            if (x <= maxX && y <= maxY) {
                ans = k;
                break;
            }
            k++;
        }
        cout << ans << "\n";
    }
    return 0;
}
