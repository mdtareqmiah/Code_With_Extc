#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      
      int a,x,y;
      cin>>a>>x>>y;
      if(x>y){
        swap(x,y);
        }
      if(x<a && a<y){
        cout<<"no"<<endl;
        }
      else cout<<"yes"<<endl;
    }
}