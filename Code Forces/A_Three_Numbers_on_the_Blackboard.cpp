#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
    vector<ll> v(3);
    cin >> v[0] >> v[1] >> v[2];
    sort(v.begin(), v.end());
    ll a = v[0];
    ll b = v[1];
    ll c = v[2];
    ll rng = c - a;
    if (c > a + b) {
        cout << min(rng, b) << "\n";
    } else {
        cout << rng << "\n";
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}