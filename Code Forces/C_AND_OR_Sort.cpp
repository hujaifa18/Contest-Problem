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
    cin>>n;
    string s;
    cin>>s;
    if(s[0]=='1')
    {
        int ans = 0;
        for(auto c:s)
        {
            if(c=='0')  ans++;
        }
        cout<<ans<<endl;
        return;
    }   
    int cnt0=0;
    for(auto c:s)   
    {
        if(c=='0')  cnt0++;
    }
    int cnt1=0;
    int ans=n;
    for(auto c:s)
    {
        if(c=='0')
            cnt0--;
        else    cnt1++;
        ans = min(ans,cnt0+cnt1);
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