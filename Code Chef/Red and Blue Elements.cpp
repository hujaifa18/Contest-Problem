#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        ll total = 0;
        for (int i = 0; i < n; i++) {
            total += a[i];
        }
        ll ans = 0;
        ll Sr = 0;
        for (int i = 1; i <= n / 2; i++) {
            Sr += a[i - 1];
            ll Sb = total - Sr;
            ll Cb = n - i;
            ll crnt =
                Sr * Cb +
                Sb * i;
            ans = max(ans, crnt);
        }
        cout << ans << '\n';
    }
    return 0;
}