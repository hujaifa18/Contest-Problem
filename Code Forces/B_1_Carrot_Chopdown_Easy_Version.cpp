#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vin(v)        \
    for (auto &u : v) \
    cin >> u
#define vout(v)                           \
    for (ll i = 0; i < (ll)v.size(); i++) \
    cout << v[i] << (i + 1 == (ll)v.size() ? '\n' : ' ')
#define sp ' '

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    vin(v);
    map<int, int> mp;
    for (auto &x : v)
        mp[x]++;
    vector<int> cnt(m + 1);
    cnt[m] = mp[m];
    for (int i = m - 1; i >= 0; i--)
    {
        cnt[i] = cnt[i + 1] + mp[i];
    }
    int ans = 0;
    for (int i = 1; i <= m; i++)
    {
        ans = max(ans, cnt[i] + mp[2 * i]);
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}