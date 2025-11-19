// at first code for binary to decimal 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>s(n);
    for(auto &u:v) cin>>u;
    cin>>s;
    int sum=0;
    int x=n-1;
    for(int i=0; i<n; i++){
        if(s[x]!='0'){
            cout<<pow(2,i)<<" ";
            int y=pow(2,i);
            int z=stoi(s[x]);
            sum+=x*y;
            cout<<z<<" "<<s[x]<<"\n";
        }
        x-=1;
    }
    cout<<sum;
}
