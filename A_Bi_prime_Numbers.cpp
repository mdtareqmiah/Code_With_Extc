// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// const int N=1e7+5;
// int spf[N];
// void spff(){
//     for(int i=0; i<=N; i++){
//         spf[i]=i;
//     }
//     int lim = sqrt(N+0.5);
//     for(int i=2; i<=lim; i++){
//         if(spf[i]==i){
//             for(int j=i*i; j<=N; j+=i){
//                 if(spf[j]==j)
//                 spf[j]=i;
//             }
//         }
//     }
// }


// int main(){
//     spff();
//     int n;
//     cin>>n;
//     vector<int>v;
//     while(n!=1){
//         v.push_back(spf[n]);
//         n/=spf[n];
//     }
//     cout<<1+v[n]<<"\n";
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
void solve(){
    
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n+1.0);
    for(int i=2; i<=n;i++){
        if(v[i]==0){
            for(int j=i; j<=n; j+=i){
                v[j]++;
            }
        }
    }

    int ct=0;
    for(int i=1; i<=n; i++){
        if(v[i]==2){
            ct++;
        }
    }
    cout<<ct<<"\n";
}