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
    ll num = n + 1;
    if (num % 2 == 0)
    {
        no;
        return;
    }
    bool f = true;
    for (ll i = 3; i <= sqrt(num); i += 2)
    {
        if (num % i == 0)
        {
            f = false;
            break;
        }
    }
    if (f)
        yes;
    else
        no;
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