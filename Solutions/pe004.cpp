#include <bits/stdc++.h>
using namespace std;

int main(){
	long long ans=0;
   for(int i=111;i<=999;i++){
   	for(int j=111;j<=999;j++){
   		long long value=i*j,temp,k=0,size=-1;
   		temp=value;
   		while(temp>0){
   			temp/=10;
   			size++;
   		}
   		temp=value;
   		while(temp>0){
   			k+=temp%10*pow(10,size);
   			size--;
   			temp/=10;
   		}
   		if(k==value && k>ans) ans=k;
   	}
   }
   cout<<ans;

}



