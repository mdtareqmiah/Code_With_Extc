#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        int x=0, y=0;
        bool flag = false;
        while(1){
            for(char u:s){
                if(u=='N'){
                    y+=1;             
                }
                if(u=='E'){
                    x+=1;
                }
                if(u=='S'){
                    y-=1;
                }
                if(u=='W'){
                    x-=1;
                }
                
            }
            if(x>a && y>a ){
                flag=true;
                break;
            }
        }
        if(flag){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}