#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
   long long num=600851475143;
   int ans=1;
   vector<bool>v;
   v.assign(ceil(sqrt(num)),true);
   for(long long i=2;i<=sqrt(num);i++){
   		if(i*i<=num && v[i]==true){
   			for(long long j=i*i;j<sqrt(num);j+=i){
   				v[j]=false;
   			}
   		}
   }
   for(int i=2;i<=sqrt(num);i++){
   		if(num%i==0 && v[i]==true){
   			ans=i;
   		}
   }
   cout<<ans;

}



