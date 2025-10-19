#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int x=a, y=b;
    for(int i=1; i<11; i++){
        x*=3;
        y*=2;
        if(x>y){
            cout<<i<<"\n";
            break;
        }
    }
    return 0;
}