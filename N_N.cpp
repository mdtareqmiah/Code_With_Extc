#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;
    vector<vector<int>> v(n, vector<int> (n));
    int row = 0, col = 0, mx = 0;
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < n; j++){
            cin >> v[i][j];
            if(v[i][j] == 2) cnt++;
        }
        if(cnt > mx){
            row = i;
            mx = cnt;
        }
    }

    cout << row << endl;
}