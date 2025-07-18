#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        long long sum=0;
        for(int &u:arr) cin>>u;
        for(int u:arr) sum+=u;
        long long x=sqrt(sum);
        if(x*x==sum){
            cout<<"YES\n";

        }
        else{
            cout<<"NO\n";
        }

    }
    return 0;
}