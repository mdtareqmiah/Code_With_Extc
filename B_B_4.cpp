#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int &u:v) cin>>u;
    sort(v.begin(), v.end());
    int day=0;
    for(int i=0; i<n; i++){
        if(v[i]>=day+1){
            day++;
        }
    }
    cout<<day<<"\n";

    return 0;
}