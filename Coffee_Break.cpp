// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int h,m;
//         char c;
//         cin>>h>>c>>m;
//         string s="00";
//         if(h==0 && m==0){
//             cout<<s<<c<<s<<"\n";
//         }
//         else if((h>=22 && h<=23) && (m>22 && m<=59)){
//             cout<<s<<c<<s<<"\n";
//         }
//         else if((h>=11 && h<=22) && (m>11 && m<22)){
//             cout<<22<<c<<22<<"\n";
//         }
//         else{
//             cout<<11<<c<<11<<"\n";
//         }
//     }
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<pair<int,int>> v = {{0,0}, {11,11}, {22,22}};
    
    while(t--){
        int h, m;
        char c;
        cin >> h >> c >> m;
        
        bool flag = false;
        for (auto [hh, mm] : v) {
            if (h < hh || (h == hh && m <= mm)) {
                printf("%02d:%02d\n", hh, mm);
                flag = true;
                break;
            }
        }
        if (!flag) printf("00:00\n");
    }
    return 0;
}
