#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;
 
 
ll n;
ll l;
ll res = 1e18;
ll r,g,b;
pair <ll,ll> a[N];
 
bool cmp(pair<ll,ll> a, pair<ll,ll> b){
   return a.fi < b.fi;
}
 
int main(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
 
    cin >> n;
    for (long i=1; i<=n; i++) cin >> a[i].fi >> a[i].se;
 
    sort(a+1,a+n+1,cmp);
    l = 1;
    for(long i=1; i<=n; i++){
        if (a[i].se == 1) r++; else
        if (a[i].se == 2) g++; else
        if (a[i].se == 3) b++;
        while (r >= 1 && g >= 1 && b >= 1){
            if (a[l].se == 1) r--; else
            if (a[l].se == 2) g--; else
            if (a[l].se == 3) b--;
            res = min(res, a[i].fi - a[l].fi);
            l++;
        }
    }
 
    if (res == 1e18) cout << -1; else
    cout << res;
    return 0;
}
