#include <bits/stdc++.h>
using namespace std;


int main(){
   
    int t = 1;
    cin >> t;
    while(t-->0)
    {
        int n,m;
        cin>>n>>m;
        
        string p,q;
        cin>>p>>q;

        int l=0;

        for(int i=0; i<m && l<n; i++) {
            if (p[l] == q[i]) { 
                l++;
            }
        }

        cout<<l<<"\n";
    }
    return 0;
}
