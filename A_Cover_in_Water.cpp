#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int sz=s.size();
        int chk=0;
        int dot=0;
        bool flag=true;
        for(int i=0; i<n; i++){
        //     if(s[i]=='.'){
        //         dot++;
        //         chk++;
        //     }
        //     if(chk==3){
        //         cout<<2<<"\n";
        //         flag=false;
        //         break;
        //     }
        //     if(s[i]=='#'){
        //         chk=0;
        //     }
        // }
        // if(flag){
        //     cout<<dot<<"\n";
        // }
        
            if(s[i]=='.' && s[i-1]=='.' && s[i+1]=='.'){
                cout<<2<<"\n";
                break;
            }
            if(s[i]=='.'){
                dot++;
            }
            else{
                continue;
                cout<<dot<<"\n";
            }
        }
        

    }
    return 0;
}