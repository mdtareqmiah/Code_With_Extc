#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size() - 1;
    if(s[n] == 'M' && s[n-1] == 'P'){
        if((s[0] == '1' && s[1] == '2') || (s[0] == '0' && s[1] == '0')){
            for(int i = 0; i < n-1; i++){
                cout << s[i];
            }
            cout << endl;
        }else{
            int x = s[0] - '0';
            int y = s[1] - '0';
            int d = (x + y) + 12;
            s[1] = (d % 10) + '0';
            d /= 10;
            s[0] = (d % 10) + '0';
            for(int i = 0; i < n-1; i++){
                cout << s[i];
            }
            cout << endl;
        }
    }else{
        if((s[0] == '1' && s[1] == '2') || (s[0] == '0' && s[1] == '0')){
            s[0] = '0', s[1] = '0';
            for(int i = 0; i < n-1; i++){
                cout << s[i];
            }
            cout << endl;
        }else{
            int x = s[0] - '0';
            int y = s[1] - '0';
            int d = (x + y) + 12;
            s[1] = (d % 10) + '0';
            d /= 10;
            s[0] = (d % 10) + '0';
            for(int i = 0; i < n-1; i++){
                cout << s[i];
            }
            cout << endl;
        }
    }

    return 0;
}