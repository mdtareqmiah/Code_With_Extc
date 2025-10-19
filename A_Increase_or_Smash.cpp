#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t; 
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int> s;
        while(n--){
            int x;
            cin>>x;
            s.insert(x);
        }
        int res=s.size();
        int ans=2*res-1;
        cout<<ans<<"\n";
    }
    
    return 0;
}
