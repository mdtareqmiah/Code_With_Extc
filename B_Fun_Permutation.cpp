// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t; 
//     cin>>t;
//     while(t--){
//         int n; 
//         cin>>n;
//         vector<int> p(n);
//         for(int i=0;i<n;i++) cin>>p[i];


//         vector<int> q(n);

//         for(int i=0;i<n;i++){
//            q[i]=n+1-p[i];
//         }

//         for(int i=0;i<n;i++){
//             cout << q[i];
//             if(i+1<n){
//                 cout<<" ";
//             }
//         }
//         cout << '\n';
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int &u:v) cin>>u;

        vector<int>v1(n);
        for(int i=0; i<n; i++){
            v1[i]=(i+1)%n +1;
        }

        for(int i=0;i<n;i++){
            cout << v1[i];
            if(i+1<n){
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}