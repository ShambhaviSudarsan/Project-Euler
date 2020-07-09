#include <bits/stdc++.h>
using namespace std;

int main(){
   int ans=2,prev0=1,prev1=2,curr=0;
   while(curr<4000000){
   	curr=prev0+prev1;
   	prev0=prev1;
   	prev1=curr;
   	if(curr%2==0) ans+=curr;
   }
   cout<<ans;

}



