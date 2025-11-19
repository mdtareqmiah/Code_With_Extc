#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    vector<ll>v(n), a;
    

    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] < 0) a.push_back(i + 1);
    }

    int ans = 0;
    n = a.size() - 1;
    for(int i = 1; i < n; i++){
        ans += abs(a[i] - a[i-1]);
    }
    cout << endl;
}