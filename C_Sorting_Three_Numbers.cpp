#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v(3);
    for(int &u:v) cin>>u;
    sort(v.begin(), v.end());
    for(int i=0; i<3; i++){
        cout<<v[i];
        if(i!=3-1){
            cout<<" ";
        }
    }
    cout<<"\n";
    return 0;
}