#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int &u:v) cin>>u;
    for(int i=1; i<n; i++){
        if(v[i]>v[i-1]){
            cout<<v[i];
            if(i!=n){
                cout<<" ";
            }
        }
    }
    cout<<"\n";
    return 0;
}