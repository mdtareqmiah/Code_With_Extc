#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        while(n--){
            string s;
            cin>>s;
            for(int i=0; i<4; i++){
                if(s[i]=='#'){
                    int x=1+i;
                    v.push_back(x);
                    //v.push_back(x);
                    //cout<<x<<" ";
                }
            }
        }
        reverse(v.rbegin(), v.rend());
        for(int u:v){
            cout<<u<<" ";
        }
        
        cout<<"\n";
    }
    return 0;
}