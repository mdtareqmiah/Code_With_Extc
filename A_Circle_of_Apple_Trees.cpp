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

        sort(v.begin(), v.end());
        int sz=unique(v.begin(), v.end())-v.begin();
        cout<<sz<<"\n";
    }
    return 0;
}