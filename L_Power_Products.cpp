#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<bool> v(n + 1, true);
    v[0] = v[1] = false;

    // Sieve of Eratosthenes
    for (int i = 2; i * i <= n; ++i) {
        if (v[i]) {
            for (int j = i * i; j <= n; j += i)
                v[j] = false;
        }
    }

    bool found = false;
    for (int i = m; i <= n; ++i) {
        if (v[i]) {
            cout << i << "\n";
            found = true;
        }
    }

    if (!found)
        cout << "Absent" << endl;

    return 0;
}
