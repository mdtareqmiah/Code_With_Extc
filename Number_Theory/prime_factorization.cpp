// now you write code for show the prime factorization
#include<bits/stdc++.h>
using namespace std;

//code for check num prime or not
bool priems(int n){
    if(n<2)return false;
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}

//code for generate prime factorization
vector<int>factors(int n){
    vector<int>f;
    for(int i=2; i*i<=n; i++){
        while(n%i==0){
            f.push_back(i);
            n/=i;
        }
    }
    if(n>1) f.push_back(n);
    return f;
}

//main code
int main(){
    int n;
    cin>>n;
    auto f=factors(n);
    if(priems(n)){
        cout<<"Prime\n";
    }
    else{
        cout<<"Not prime\n";
    }
    for(auto u:f) cout<<u<<" ";
    cout<<"\n";
    return 0;
}