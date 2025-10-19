#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int &u:v) cin>>u;
    int sz=v.size();
  
    for(int i=0; i<n; i++){
        cout<<v[i];
        if(i!=n-1){
            cout<<" ";
        }
    }
    cout<<"\n";
    return 0;
}