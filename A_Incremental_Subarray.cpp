#include<bits/stdc++.h>
using namespace std;
int t,n,m;
int main(){
	cin>>t;
	while(t--){
		cin>>n>>m;
		int b=0,x;
		for(int i=1;i<=m;i++){
			cin>>x;
			if(x==1&&i>1)b=1;
		}
		if(b)cout<<1<<endl;
		else cout<<n-x+1<<endl;
	}
	return 0;
}
