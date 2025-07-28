#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int odd=1, even=1;
    while(t--){
        int n;
        cin>>n;
        even=1;
        for(int i=1; i<=n; i++){

            for(int j=1; j<=2; j++){
                odd=even;
                for(int k=1; k<=n; k++){
                    if(odd==1){
                        cout<<"##";
                    }
                    else{
                        cout<<"..";
                    }
                    odd=1-odd;
                }
                cout<<endl;
            }
            even=1-even;
        }
    }
    return 0;
}
