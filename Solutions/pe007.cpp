#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<bool>primes;
	primes.assign(1000009,true);
	for(int i=2;i<=1000000;i++){
		if(primes[i]==true && i*i<=1000000){
			for(int j=i+i;j<=1000000;j+=i){
				primes[j]=false;
			}
		}
	}
	vector<int>v;
	for(int i=1;i<=1000000;i++){
		if(primes[i]==true){
			v.push_back(i);
		}
	}
	cout<<v[10001];
}



