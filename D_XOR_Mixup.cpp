#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int &u:v) cin>>u;
        cout<<v[1]<<"\n";

    }
    //cout<<(3^2^5);

    return 0;
}