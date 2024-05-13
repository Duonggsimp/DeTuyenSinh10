#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;
 
ll l,r;
ll res;
 
ll rever(ll n){
  ll tmp = 0;
  while (n != 0){
    tmp = tmp * 10 + n % 10;
    n /= 10;
  }
  return tmp;
}

int main(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
 
    cin >> l >> r;
    for (ll i=l; i<=r; i++){
        if (__gcd(i,rever(i)) == 1) res++;
    }
 
    cout << res;
    return 0;
}
close
