#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt = 0, cnt1 = 0;
    for(auto c : s){
        if(c >= 'A' && c <= 'Z') cnt++;
        if(c >= 'a' && c <= 'z') cnt1++;
    }

    cout << cnt << " " << cnt1 << endl;
}