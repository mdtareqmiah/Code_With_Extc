// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int>v;
//         while(n--){
//             int x;
//             cin>>x;
//             v.push_back(x);
//         }
//         for(int u:v){
//             cout<<u<<" ";
//         }
//         cout<<'\n';

//         cout<<2<<3;
//         cout<<67;
    
//     }
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N=1e8+5;
bitset<N> arr;
int main(){
    for(int i=3; i<=N; i+=2){
        arr[i]=1;
    }
    arr[2]=1;
    int lim=sqrt(N+0.5);
    for(ll i=3; i<=lim; i+=2){
        for(ll j=i*i; j<=N; j+=2*i){
            arr[j]=0;
        }
    }
    int n;
    cin>>n;
    vector<int>v;
    for(ll i=2; i<=n*n; i++){
        if(arr[i]){
            v.push_back(i);
        }
    }
    cout<<v[n];
    return 0;
}