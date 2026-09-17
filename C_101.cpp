#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int firstidx = -1;
        int lastidx = -1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != 0)
            {
                if (firstidx == -1)
                    firstidx = i;
                lastidx = i;
            }
        }
        if (firstidx != -1 && v[firstidx] == -1)
            v[firstidx] = 1;
        if (lastidx != -1 && v[lastidx] == -1)
            v[lastidx] = 1;
        for (auto x : v)
        {
            if (x == -1)
                cout << 0 << " ";
            else
                cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}