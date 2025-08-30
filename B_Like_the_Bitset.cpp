#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ct=0, lng=0;
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                ct++;
                lng=max(lng,ct);
            }
            else{
                ct=0;
            }
        }
        if(lng>=k){
            cout<<"NO\n";
            continue;
        }
        else{
            cout<<"YES\n";
        }
        vector<int>v(n);
        int x=1, y=n;
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                v[i]=x++;
            }
            else{
                v[i]=y--;
            }
        }
        for(int i=0; i<n; i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}