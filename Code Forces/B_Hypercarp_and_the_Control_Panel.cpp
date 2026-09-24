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
    ll n;
    cin >> n;
    vector<ll> v(n + 2);
    v[0] = 0;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    v[n + 1] = 0;
    int seg = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i] != v[i + 1])
            seg++;
    }
    int b = 0;
    for (int i = 0; i < n - 1; i++)
    {
        ll a = v[i], c = v[i + 2], d = v[i + 3];
        ll x = v[i + 1];
        if (a == x && c == d && x != c)
            b = 2;
        if (a == x && c != x && d != x)
            b = max(b, 1);
        if (c == d && x != c && a != c)
            b = max(b, 1);
    }
    cout << seg + b << endl;
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