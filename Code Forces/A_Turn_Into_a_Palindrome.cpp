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
    int n;
    char c;
    cin>>n>>c;
    string s;
    cin>>s;
    int ans = 0;
    for(int i=0;i<n/2;i++)
    {
        if(s[i] != s[n-i-1])
        {
            if((s[i] == c && s[n-i-1]!=c) ||(s[i] != c && s[n-i-1]==c))
                ans++;
            else
                ans+=2;
        }
    }
    cout<<ans<<endl;
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