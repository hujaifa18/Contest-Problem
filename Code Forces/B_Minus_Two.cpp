#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll a = 0, b = 0, c = 0;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] % 2 != 0)
                a++;
            else if (v[i] % 4 == 0)
                b++;
            else
                c++;
        }
        cout << max({a, b, c}) << endl;
    }
    return 0;
}