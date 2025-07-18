#include<bits/stdc++.h>
#define ll long long

using namespace std;

const int sz=1e6+5;
bitset<sz> arr;

void sive(){
    arr.set();
    arr[0]=arr[1]=0;
    int lim=sqrt(sz+.5);
    for(int i=2; i<= lim; i++){
        if(arr[i]){
            for(int j=i*i; j<sz; j+=2*i){
                arr[j]=0;
            }
        }
    }
    int n;
    cin>>n;
    vector<int> primes;
    for (int i = 2; i < n; i++) {
        if (arr[i]) primes.push_back(i);
    }
    for(int i=0; i<n; i++){
        cout<<primes[i]<<" ";
    }
    
    // cout<<primes[n-1];

}



int main(){
    sive();
}

