/*
Problem:

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million (2,000,000).
*/

#include <bits/stdc++.h>
using namespace std;

// void Fast_IO() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
// #ifndef ONLINE_JUDGE
//    freopen("input.in", "r", stdin);
//    freopen("output.out", "w", stdout);
// #endif
// }

vector<bool>primes(2000001, true);
vector<int>all_primes;

void sieve_primes() {

   int n = 2000000;

   for (int i = 2; i*i <= n; i++) {
      if (primes[i]==true) {
         for (int j = i*i; j <= n; j += i ) {
            primes[j] = false;
         }
      }
   }

   all_primes.push_back(2);
   for (int i = 3; i <= n; i += 2) {
      if (primes[i]) {
         all_primes.push_back(i);
      }
   }

}

int main() {
   // Fast_IO();
   sieve_primes();
   long long sum = 0;
   for (int i = 0; i < all_primes.size(); i++) {
      sum += all_primes[i];
   }
   cout << sum << endl;

}

// Answer - 142913828922
