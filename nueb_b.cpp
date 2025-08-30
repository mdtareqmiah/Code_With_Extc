#include<bits/stdc++.h>
using namespace std;
vector<int>v;


// void divisor(int n){
//     for(int i=1; i<=n; i++){
//         if(n%i==0){
//             int x=sqrt(i);
//             if(x*x==i){
//               v.push_back(i);
//             }
//         }
//     }
// }



int main(){
    int t;
    cin >> t;
    while (t--){
    
        int l,r;
        cin>>l>>r;
        int mx = -1;
        int ind ;

        for(int i=l; i<=r; i++){
        
            divisor(i);
            int ct =v.size();
            v.clear();
            if(ct>mx){
                mx = ct;
                ind = i;
            }
             
               
        }
        cout << ind<<endl;

       // for(auto u:v){
         //   cout<<u<<"\n";
        //}
    }
    
    
}