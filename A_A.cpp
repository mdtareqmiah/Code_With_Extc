#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k=2;
        while(1){
            int x=pow(2,k)-1;
            if(n%x==0){
                cout<<n/x<<"\n";
                break;

            }
            k++;
        }
    }

    return 0;
}