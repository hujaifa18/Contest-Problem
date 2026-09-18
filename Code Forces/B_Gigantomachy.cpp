#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v(n);
        vector<int> b(m);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        int x = 0, y = 0;
        for (int i = 0; i < n - 1; i++)
            x += (v[i] - v[i + 1] + 1);
        for (int i = 0; i < m - 1; i++)
            y += (b[i] - b[i + 1] + 1);
        x += v.back();
        y += b.back();
        if (x >= y)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}