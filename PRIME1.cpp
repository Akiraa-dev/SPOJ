/**
 *    author:  akira
 *    created: 24/05/2023 14:13:09
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;
template<class T> T lcm(T a, T b) {
    return a / __gcd(a, b) * b;
}

const ldb PI = 3.1415926535897932384626433832795;
const ll INF = 1000000000000000000;
const ll MOD = 1000000007;
const ll MOD2 = 1000000009;
const ldb EPS = 1e-6;

bool prime(ll x) {
    ll cnt = 0;
    if(x == 1 || x == 0) return false;
    else if(x == 2) return true;
    else {
        for(ll i = 2; i * i <= x; i++) {
            if(x % i == 0) return false;
        }
        return true;
    }
}
void solve() {
    ll t; cin >> t;
    while(t--) {
        ll m, n; cin >> m >> n;
        ll cnt = 0;
        for(ll i = m; i <= n; i++) {
            if(prime(i) == true) {
                cout << i << endl;
            }
        }
        cout << endl;
    }
}

int main() {
    // #ifndef ONLINE_JUDGE
    // freopen("PRIME1.INP", "r", stdin);
    // freopen("PRIME1.OUT", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}

/**
  *    {\__/}
  *    (• .•)
  *    / >♥️
**/