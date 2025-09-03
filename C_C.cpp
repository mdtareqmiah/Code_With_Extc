#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &u:v) cin>>u;
    sort(v.begin(),v.end());

    int l=0, res=1;
    for(int i=0; i<n; i++){
        while(v[i]-v[l]>5){
            l++;
        }
        res=max(res,i-l+1);
    }
    cout<<res<<"\n";
    return 0;

}