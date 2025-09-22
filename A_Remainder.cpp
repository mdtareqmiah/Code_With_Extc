#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,y;
    cin>>n>>x>>y;
    string s;
    cin>>s;
    int res=0;
    for(int i=n-x; i<n; i++){
        if(i==n-y-1){
            if(s[i]!='1'){
                res+=1;
            }

        }
        else{
            if(s[i]!='0'){
                res+=1;
            }
        }
    }
    cout<<res<<"\n";
    return 0;
}