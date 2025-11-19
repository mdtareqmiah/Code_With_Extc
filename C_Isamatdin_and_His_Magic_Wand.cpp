#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        vector<int>x,y;

        for(int &u:v) {
            cin>>u; 
        }
        bool odd=true;
        bool even=true;
        for(int ch:v){
            if(ch%2==0) odd =false;
            else even =false;
        }
        if(even || odd){
            for(int u:v)cout<<u<<" ";
            cout<<"\n";
        }
        // else if(odd){
        //     for(int u:v) cout<<" ";
        //     cout<<"\n";
        // }
        else{
            sort(v.begin(), v.end());

            for(int u:v) cout<<u<<" ";
            cout<<"\n";
        }
        
    }
}
