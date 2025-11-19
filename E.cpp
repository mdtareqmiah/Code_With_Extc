#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin >> n;

    int arr[n];

    for(int i =0 ;i<n; i++){
        cin >>arr[i];
    }
    
   double pos=0,neg=0,ze=0;
    for(int i =0 ;i<n; i++){
        
        if(arr[i]>0){
            pos++;
            // r1 = (pos/n);
            // cout << fixed<<setprecision(6)<< r1 <<endl;
        }
        else if(arr[i]<0){
            neg++;
            // r2= neg/n;
            // cout << fixed<<setprecision(6)<< r2 <<endl;
        }
        else if(arr[i]==0){
            ze++;
            // r3= ze/n;
            // cout << fixed<<setprecision(6)<< r3 <<endl;
        }
    
    }
    double r1,r2,r3;

        r1= pos/n;
        r2=neg/n;
        r3=ze/n;
        cout << fixed<<setprecision(6)<< r1 <<endl;
    
          cout << fixed<<setprecision(6)<< r2 <<endl;
    
    cout << fixed<<setprecision(6)<< r3 <<endl;

    return 0;
}