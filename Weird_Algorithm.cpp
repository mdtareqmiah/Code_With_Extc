#include<bits/stdc++.h>
using namespace std;

// int rec(int n){
//     if(n==1) return n;
//     if(n%2==0){
//         return n/=2;
//     }
//     else{
//         return n*=3+1;
//     }
// }

int main(){
    int n;
    cin>>n;
    while(n!=1){
        
        if(n%2==0){
            cout<<n<<" ";
            // x=n/2;
            n/=2;
        }
        else{
            //int y=(n*3)+1;
            cout<<n<<" ";
            n=n*3+1;
        }
    }
    cout<<1<<"\n";

    return 0;
}