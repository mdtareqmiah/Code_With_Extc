#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n; 
    vector<int>v(n);
    for(int &u:v) cin>>u;
    sort(v.begin(),v.end());

    int l=0, r=2;
    bool flag=false;
    int indx;
    for(int i=0; i<n-2; i++){
        if(v[r]==(v[l]+v[l+1])){
            flag=true;
            indx=l+2;
            break;

        }
        l++;
        r++;
    }
    if(flag){
        for(int i=indx; i>=indx-2; i--){
            cout<<v[i]<<" ";
        }cout<<"\n";
    }
    else{
        cout<<-1<<"\n";
    }

    return 0;
}