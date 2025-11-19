#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p=n,res;
        int mx=0;
        vector<int>v;
        while(n--){
            int d, ti;
            cin>>d>>ti;
            int x=d/ti;
            v.push_back(x);

        }
        //cout<<v.size()<<"\n";
        for(int i=0; i<p; i++){
            if(v[i]>mx){
                mx=v[i];
                res=i;
            }
        }
        cout<<res+1<<"\n";
    }
    return 0;
}