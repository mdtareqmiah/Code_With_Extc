#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        set<char>st(s.begin(),s.end());
        if(st.size()!=s.size()){
            cout<<"No\n";
            continue;
        }

        char mx=*max_element(s.begin(), s.end());
        char mn=*min_element(s.begin(), s.end());
        int x=mx-mn+1;
        if(x!=s.size()){
            cout<<"No\n";
            continue;
        }
        else{
            cout<<"Yes\n";
        }

    }
    return 0;
}