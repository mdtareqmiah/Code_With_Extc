#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector<int>v(n+1);
    for(int i=1; i<=n; i++){
        cin>>v[i];
        
    }
   
    while(q--){
        int res=0;
        int a,b;
        cin>>a>>b;
        for(int i=a; i<=b; i++){
            int p=1;
            if(p%2==0){
                int u=2*v[i];
                res+=u;
            }else{
                
                res+=v[i];
            }
            p++;
        }
        cout<<res<<"\n";
    }

    
    return 0;
}