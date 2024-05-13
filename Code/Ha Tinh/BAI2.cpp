#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;
 
 
ll n;
bool f[N];
 
ll sum(ll n){
  ll t = 0;
  while (n!=0){
    t += pow(n%10,2);
    n /= 10;
  }
  return t;
}
 
void sng(){
 
  fill(f+1,f+N+1,1);
  f[0] = f[1] = 0;
  for (long i=2; i<=sqrt(2000); i++){
      if (f[i])
      for (long j=i*2; j<=2000; j+=i) f[j] = 0;
    }
}
 
int main(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
 
    sng();
    cin >> n;
 
    if (f[sum(n)]) cout << 1 << xn; else cout << -1 << xn;
    cout << sum(n);
    return 0;
}
