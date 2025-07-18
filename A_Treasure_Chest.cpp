#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a>=b){
            cout<<a<<"\n";
            continue;
        }
        else{
            if(a+c>=b){
                cout<<b<<"\n";
                continue;
            }
            else{
                cout<<(a+c+(b-a-c<<1))<<"\n";
            }
        }
    }
    return 0;
}
