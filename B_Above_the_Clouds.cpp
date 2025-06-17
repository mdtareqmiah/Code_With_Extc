#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        bool flag = true;
        for(int i=1; i<n-1; i++){
            string a=s.substr(0,i);
            string b=s.substr(i,1);
            string c=s.substr(i+1);

            if((a+c).find(b)!=string::npos){
                
                flag=false;
                break;
            }
            
        }
        if(!flag){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
    return 0;
}

