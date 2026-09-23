#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool check(vector<ll>&v)
{
     ll sum = 0;
    for (auto x : v) {
        sum += x;
        if (sum < 0) return false;
    }
    return true;
}
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        if(check(v))   
        {
            cout<<"YES\n";
            continue;
        }
        ll crntS = 0;
        int bad= -1;
        long long mn = INT_MAX;
        int del = -1;
        for (int i = 0; i < n; i++) {
            crntS += v[i];
            if (v[i] < mn) {
                mn = v[i];
                del= i;
            }

            if (crntS< 0) {
                bad= i;
                break; 
            }
        }
        vector<ll> v2;
        for (int i = 0; i < n; i++) {
            if (i != del) {
                v2.push_back(v[i]);
            }
        }
        if(check(v2))   cout<<"YES\n";
        else    cout<<"NO\n";
    }
}
