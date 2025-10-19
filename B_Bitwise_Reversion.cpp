#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z,a,b,c,p;
        cin>>x>>y>>z;
        for(int i=0; i<31; i++){
            a=(x>>i)&1;
            b=(y>>i)&1;
            c=(z>>i)&1;
            p=a+b+c;
            if(p==2) break;
        }
        if(p!=2){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}