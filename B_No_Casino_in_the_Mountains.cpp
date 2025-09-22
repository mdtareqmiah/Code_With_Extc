#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int count=0, ans=0;

        for(int i=0; i<n; i++){
            if(arr[i]==1)
                count=0;
            else
                count++;
            if(count==k) {
                ans++;
                count=0;
                i+=1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}