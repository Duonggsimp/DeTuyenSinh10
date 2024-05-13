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
 
int main(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
 
    cin >> n;
    if (n == 1) cout << 3; else
    cout << (3+2*n+1)*n / 2;
    return 0;
}
