#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;
 
ll n;
ll res = 1;
 
int main(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
 
    cin >> n;
 
    for (long i=2; i<=n-1; i+=2){
        if (n % i == 0) res = res * i;
    }
 
    if (res == 1) res =0;
    cout << res;
    return 0;
}
