#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=3;
    vector<int>v(3);
    for(int &u:v) cin>>u;
    sort(v.begin(), v.end());

    
    if((v[2]-v[0])>=10){
        cout<<"check again\n";
    }
    else{
        cout<<"final "<<v[1]<<"\n";
    }
    return 0;
}