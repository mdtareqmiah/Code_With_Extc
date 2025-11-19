// #include <bits/stdc++.h>
// using namespace std;

// int main() {


//     int n;
//     cin >> n;
//     vector<long long> a(n + 1), S(n + 1), P(n + 1), Q(n + 2, LLONG_MAX);

//     for (int i = 1; i <= n; i++) cin >> a[i];

   
//     for (int i = 1; i <= n; i++)
//         S[i] = S[i - 1] + a[i];

    
//     P[0] = 0;
//     for (int i = 1; i <= n; i++)
//         P[i] = min(P[i - 1], S[i]);

    
//     for (int i = n; i >= 1; i--)
//         Q[i] = min(Q[i + 1], S[i]);

//     int good = 0;
//     for (int k = 0; k < n; k++) {
//         if (Q[k + 1] >= S[k] && P[k] >= S[k] - S[n])
//             good++;
//     }

//     cout << good << "\n";
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

vector<int> buildLPS(string pattern) {
    int m = pattern.size();
    vector<int> lps(m, 0);
    int len = 0; 

    for (int i = 1; i < m; ) {
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) len = lps[len - 1];
            else lps[i++] = 0;
        }
    }
    return lps;
}


void KMPsearch(string text, string pattern) {
    vector<int> lps = buildLPS(pattern);
    int n = text.size(), m = pattern.size();
    int i = 0, j = 0;

    while (i < n) {
        if (text[i] == pattern[j]) {
            i++; j++;
        }
        if (j == m) {
            cout << "Pattern found at index " << i - j << "\n";
            j = lps[j - 1];
        } else if (i < n && text[i] != pattern[j]) {
            if (j != 0) j = lps[j - 1];
            else i++;
        }
    }
}

int main() {
    string text = "ABABABABA";
    string pattern = "ABABA";
    KMPsearch(text, pattern);
    return 0;
}
