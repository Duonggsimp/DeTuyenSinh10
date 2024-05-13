#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;
 
ll l,r;
ll x=1;
ll tmp;
bool prime(ll n){
  for (long i=2; i<=sqrt(n); i++){
    if (n % i == 0) return false;
   }
  return n >= 2;
}
 
int main(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
 
    cin >> l >> r;
    for (long i=1; i<=14; i++){
        x *= i;
        tmp = x - 1;
        if (l <= tmp && tmp <= r && prime(tmp)) cout << tmp << xn;
        tmp = x + 1;
        if (l <= tmp && tmp <= r && prime(tmp)) cout << tmp << xn;
    }
    return 0;
}
