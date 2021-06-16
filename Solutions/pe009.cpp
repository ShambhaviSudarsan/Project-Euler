/*
Problem :
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
  
*/

#include <bits/stdc++.h>
using namespace std;

void Fast_IO() {
   ios::sync_with_stdio(0);
   cin.tie(0);
#ifndef ONLINE_JUDGE
   freopen("input.in", "r", stdin);
   freopen("output.out", "w", stdout);
#endif
}

int main() {
   Fast_IO();
   for(int i=0;i<1000/3;i++){
      for(int j=i;j<1000/2;j++){
         int k = 1000-j-i;
         if(pow(i,2)+pow(j,2)==pow(k,2) || pow(j,2)+pow(k,2)==pow(i,2) || pow(i,2)+pow(k,2)==pow(j,2)){
            if( i+j+k == 1000){
               cout<<i*j*k<<endl;
               return 0;
            }
         }
      }
   }
   
}

// Answer - 31875000
