#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;
 
ll n;
ll res,cnt;
ll a[N];
 
int main(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
 
    cin >> n;
    for (long i=1; i<=n; i++){
        cin >> a[i];
    }
 
    cnt = 1;
    for (long i=2; i<=n; i++){
        if (a[i] * a[i-1] >= 0) cnt++; else cnt = 1;
        res = max(res,cnt);
    }
 
    cout << res;
    return 0;
}
