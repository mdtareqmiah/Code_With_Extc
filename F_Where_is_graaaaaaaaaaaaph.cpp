#include<bits/stdc++.h>
using namespace std;

vector<int>v;
int main(){
    int a,b;
    cin>>a>>b;
    v.push_back(b);
    while(b!=a){
        if(b%2==0){
            v.push_back(b/2);
            b/=2;
        }
        else{
            if((b-1)%10!=0){
                break;

            }
            else{
                v.push_back((b-1)/10);
                b=(b-1)/10;
            }
        }
        if(a>b){
            break;
        }
    }
    if(v.back()!=a){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n"<<v.size()<<"\n";
        reverse(v.begin(), v.end());
        for(auto u:v) cout<<u<<" ";
    }cout<<"\n";
    return 0;
}
//learn and clear concept again submit