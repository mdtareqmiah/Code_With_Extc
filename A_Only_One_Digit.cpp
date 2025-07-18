#include<bits/stdc++.h>
using namespace std;

bool mdig(int a, int b){
    unordered_set<int>us;
    while (a){
        /* code */
        us.insert(a%10);
        a/=10;
    }
        if(b==0){
            us.count(0);

        }
        while(b){
            if(us.count(b%10)){
                return true;
            }
            b/=10;
        }
    
    return false;
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        for(int i=0; ; i++){
            if(mdig(x,i)){
                cout<<i<<"\n";
                break;
            }
        }
    }
    return 0;
}

