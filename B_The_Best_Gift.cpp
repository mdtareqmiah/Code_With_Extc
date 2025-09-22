#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v(15);
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        int a;
        cin>>a;
        v[a]++;
    }
    int ans=0;
    for(int i=1; i<m; i++){
        for(int j=i+1; j<=m; j++){
            ans+=v[i]*v[j];
        }
    }
    cout<<ans<<"\n";
    return 0;
}