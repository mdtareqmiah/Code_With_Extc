#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;

        if (k > n*n) {
            cout << "NO\n";
            continue;
        }

        vector<vector<char>> grid(n, vector<char>(n, 'D')); // default arrows

        int rem = k;
        // Fill U in the top-left diagonal-like pattern
        for(int i=0; i<n && rem>0; i++){
            for(int j=0; j<n && rem>0; j+=2){
                grid[i][j] = 'U';
                rem--;
            }
        }

        // Fill remaining cells with any safe arrows ('L' or 'R') to match sample style
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]!='U'){
                    if((i+j)%2==0) grid[i][j]='R';
                    else grid[i][j]='L';
                }
            }
        }

        cout << "YES\n";
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout << grid[i][j];
            }
            cout << "\n";
        }
    }
    return 0;
}
