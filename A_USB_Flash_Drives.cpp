#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int>v(n);
    for(int &u:v){
        cin>>u;
    }
    int res=0, sum=0;
    sort(v.begin(),v.end());
    for(int i=n-1; i>=0; i--){
        sum+=v[i];
        res++;
        if(sum>=m){
            break;
        }
    }
    cout<<res<<"\n";

    return 0;
}