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
    vector<int>v(n),res;
    vin(v);
    sort(v.rbegin(),v.rend());
    while(!v.empty())
    {
        vector<int>b;
        for(auto x:v)
        {
            if(!res.empty() && res.back() == x) b.push_back(x);
            else    res.push_back(x);
        }
        res.push_back(0);
        v = b;
    }
    for(auto x:res)
    {
        if(x)   cout<<x<<" ";
    }
    cout<<endl;
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