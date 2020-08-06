#include <bits/stdc++.h>
using namespace std;

int main(){
	// freopen("input.in","r",stdin);
	// freopen("output.out","w",stdout);
	string s;
	cin>>s;
	long long ans=0;
	for(int i=0;i<987;i++){
		long long pro=1;
		for(int j=i;j<i+13;j++){
			int p = s[j]-48;
			pro*=p;
		}
		ans=max(pro,ans);
	}
	cout<<ans;
}



