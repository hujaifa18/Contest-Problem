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
    cin>>n;
    vector<ll>v(n);
    vin(v);
    vector<ll>v2(n);
    for(ll i=0;i<n;i++)
        v2[i] = v[i] - (i+1);
    sort(v2.begin(),v2.end());
    v2.erase(unique(v2.begin(),v2.end()),v2.end());
    int ans=0;
    int cnt=0;
    ll x = v2.size();
    for(ll i=0;i<x;i++)
    {
        if(i>0 && v2[i]==v2[i-1]+1)
            cnt++;
        else
            cnt = 1;
        ans = max(ans,cnt);
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