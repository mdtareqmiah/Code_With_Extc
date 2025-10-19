#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x=n%3;
        if(x==0){
            cout<<x<<"\n";
        }else{

            cout<<3-x<<"\n";
        }
    }
    return 0;
}